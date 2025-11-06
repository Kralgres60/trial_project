/*
 * system.cpp
 *
 *  Created on: Oct 23, 2025
 *      Author: edogan
 */


#include "system.h"
#include "tim.h"


void delay(uint32_t delayMs)
{
	HAL_Delay(delayMs);
}


void delayMicroseconds(uint32_t delayMicro)
{
	__HAL_TIM_SET_COUNTER(&htim1,0);  // set the counter value a 0
	while (__HAL_TIM_GET_COUNTER(&htim1) < delayMicro);  // wait for the counter to reach the us input in the parameter
}


uint32_t 	millis()
{
	return HAL_GetTick();
}
