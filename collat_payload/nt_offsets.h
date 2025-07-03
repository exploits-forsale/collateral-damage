#ifndef _NT_OFFSETS
#define _NT_OFFSETS
#include <Windows.h>

// Offsets for SeMediumDaclSd / Pointer to SeMediumDaclSd

// PC
//#define ORIG_SD_OFFSET 0xd55f20
//#define SD_PTR_OFFSET 0xd55658

// Xbox - 10.0.22621.2864 - Base: 0xFFFFF8004009F000
#define ORIG_SD_OFFSET_2864 0xC0E48 // @ ntoskrnl.exe!0xFFFFF8004015FE48
#define SD_PTR_OFFSET_2864 0xC05F0  // @ ntoskrnl.exe!0xFFFFF8004015F5F0

// Xbox - 10.0.25398.4478 - Base: 0xFFFFF8004009F000
#define ORIG_SD_OFFSET_4478 0xC62B8 // @ ntoskrnl.exe!0xFFFFF800401652B8
#define SD_PTR_OFFSET_4478 0xC5A58  // @ ntoskrnl.exe!0xFFFFF80040164A58

// Xbox - 10.0.25398.4908/4909 - Base: 0xFFFFF8004009F000
#define ORIG_SD_OFFSET_4908 0xC62B8 // @ ntoskrnl.exe!0xFFFFF800401652B8
#define SD_PTR_OFFSET_4908 0xC5A48  // @ ntoskrnl.exe!0xFFFFF80040164A48

VOID set_build_rev(ULONG rev);
UINT64 get_sd_ptr_offset();
UINT64 get_orig_sd_offset();


#endif
