/*
 * retarget.c
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */
#include "stm32f1xx_hal.h"
#include "usart.h"
#include <stdio.h>
#include <string.h>

extern int __io_putchar(int ch) __attribute__((weak));


int __io_putchar(int ch)
{
	uint8_t data = (uint8_t)ch;
	HAL_UART_Transmit(&huart1,(const uint8_t*) &data, 1, HAL_MAX_DELAY);
	return 0;
}

int __io_getchar(void) 
{
	uint8_t tmpData = 0;
	HAL_UART_Receive(&huart1, (uint8_t*)&tmpData, 1, HAL_MAX_DELAY);
	return (int)tmpData;
}



