#include "macros.h"
#include "test_interface.h"

extern PF_TEST_FUNC *g_pfTest;

int main(int argc, char *argv[])
{
	int sdwRet = TEST_FAIL;

	if (NULL == g_pfTest)
	{
		goto _end;
	}

	sdwRet = sdwRetg_pfTest(NULL);

_end:
	DP_LOG("test result is %d\n", sdwRet);
	
	return 0;
}