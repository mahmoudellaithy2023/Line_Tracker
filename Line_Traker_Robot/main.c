/*
 * app.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Mohamed Hany
 */
#include "Drivers/HAL/DIO_interface.h"
#include "Drivers/HAL/PWM_interface.h"
#include "Drivers/MCAL/MotorDriver_interface.h"
#include "Drivers/MCAL/IR_interface.h"
#include "Drivers/Common/Defination.h"
#include "Drivers/Common/BIT_Math.h"
#include "Drivers/Common/STD_Types.h"





int main (void)
{
	IR_Init();
	MotorDriver_Init();
	PWM_Init();
	PWM_SetOCRValue(192);
	PWM_FAST_SetMode(1);
	while(1)
	{
		if (IR_Read_LeftIR()==WHITE && IR_Read_RightIR()==WHITE)
		{
			MotorDriver_MoveForward();
		}
		else if (IR_Read_LeftIR()==BLACK && IR_Read_RightIR()==WHITE)
		{
			MotorDriver_MoveForwardLeft();
		}
		else if (IR_Read_LeftIR()==WHITE && IR_Read_RightIR()==BLACK)
		{
			MotorDriver_MoveForwardRight();
		}
		else if (IR_Read_LeftIR()==BLACK && IR_Read_RightIR()==BLACK)
		{
			MotorDriver_Stop();
		}
	}

}

