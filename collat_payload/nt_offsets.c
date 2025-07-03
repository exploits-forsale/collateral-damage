#include "nt_offsets.h"

#include <Windows.h>

ULONG build_rev = 0;

VOID set_build_rev(ULONG rev)
{
	build_rev = rev;
}

UINT64 get_sd_ptr_offset()
{
	if (build_rev == 2864)
	{
		// 10.0.22621.2864
		return SD_PTR_OFFSET_2864;
	}
	else if (build_rev == 4478)
	{
		// 10.0.25398.4478
		return SD_PTR_OFFSET_4478;
	}
	else if (build_rev == 4908 || 4909)
	{
		// 10.0.25398.4908/4909
		return SD_PTR_OFFSET_4908;
	}

	return 0;
}

UINT64 get_orig_sd_offset()
{
	if (build_rev == 2864)
	{
		// 10.0.22621.2864
		return ORIG_SD_OFFSET_2864;
	}
	else if (build_rev == 4478)
	{
		// 10.0.25398.4478
		return ORIG_SD_OFFSET_4478;
	}
	else if (build_rev == 4908 || 4909)
	{
		// 10.0.25398.4908/4909
		return ORIG_SD_OFFSET_4908;
	}

	return 0;
}