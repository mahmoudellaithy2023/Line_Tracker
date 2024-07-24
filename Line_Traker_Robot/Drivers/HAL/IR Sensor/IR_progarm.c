/*
 * IR_progarm.c
 *
 *  Created on: Mar 1, 2024
 *      Author: ahmed saeed
 */

#include "../Common/STD_Types.h"
#include "../Common/BIT_Math.h"
#include "../HAL/DIO_interface.h"



void IR_Init(void)
{
	DIO_SetPinDir('B',0,0);
	DIO_SetPinDir('B',1,0);
}

uint8 IR_Read_RightIR(void)
{
	return DIO_ReadPin('B',0);
}
uint8 IR_Read_LeftIR(void)
{
	return DIO_ReadPin('B',1);
}

