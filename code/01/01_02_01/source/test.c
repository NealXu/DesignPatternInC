#include "macros.h"
#include "test_interface.h"
#include "sensor.h"


PF_TEST_FUNC *g_pfTest = NULL;

int test_sensor(void *pPara)
{
	Sensor *ptSen = NULL;
	int fltFrq = 20;
	int updFrq = 30;

	ptSen = Sensor_Create();
	if (NULL == ptSen)
	{
		DP_LOG("Failed to create sensor instance.\n");
		return TEST_FAIL;
	}

	Sensor_setFilterFrequency(ptSen, fltFrq);
	Sensor_setUpdateFrequency(ptSen, updFrq);

	DP_LOG("filter frequency is %d\n", Sensor_getFilterFrequency(ptSen));
	DP_LOG("update frequency is %d\n", Sensor_getUpdateFrequency(ptSen));

	Sensor_Destroy(ptSen)

	return TEST_OK;
}

g_pfTest = (PF_TEST_FUNC *)test_sensor;