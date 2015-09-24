#ifndef _MACROS_H_
#define _MACROS_H_

#include <stdio.h>

#define TEST_OK (0)
#define TEST_FAIL(1)

#define DP_LOG(format, args...) \
	printf("[%s:%d]"format, __FUNCTION__, __LINE__, ##args)

#define DP_CHCK_NULL_PTR_WITH_RET(ptr, ret) 		\
	do 												\
	{												\
		if (NULL == ptr)							\
		{											\
			DP_LOG("%s is null pointer\n", #ptr);	\
			return ret;								\
		}											\
	} while (0)

#define DP_CHCK_NULL_PTR_WITH_VOID(ptr) 		\
	DP_CHCK_NULL_PTR_WITH_RET(ptr,)

#endif