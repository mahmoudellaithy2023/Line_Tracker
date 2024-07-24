/*
 * DIO_Program.c
 *
 *  Created on: Feb 16, 2024
 *      Author: Mohamed Hany
 */
#include <avr/io.h>
#include "../Common/Defination.h"
#include "../Common/STD_Types.h"
#include "../Common/BIT_Math.h"
#include "DIO_interface.h"





void DIO_SetPinDir(uint8 PortName  , uint8 PinNum,  uint8 Direction)
{

	if (PortName == 'A')
	{
		switch (Direction)
		{
		case 1 :
			SET_BIT(DDRA ,PinNum);
			break ;
		case 0 :
			CLR_BIT(DDRA,PinNum);
			break ;
		}
	}

	else if (PortName == 'B')
	{
		switch (Direction)
		{
		case 1 :
			SET_BIT(DDRB ,PinNum);
			break ;
		case 0 :
			CLR_BIT(DDRB,PinNum);
			break ;
		}
	}
	else if (PortName == 'C')
	{
		switch (Direction)
		{
		case 1 :
			SET_BIT(DDRC ,PinNum);
			break ;
		case 0 :
			CLR_BIT(DDRC,PinNum);
			break ;
		}
	}
	else if (PortName == 'D')
	{
		switch (Direction)
		{
		case 1 :
			SET_BIT(DDRD ,PinNum);
			break ;
		case 0 :
			CLR_BIT(DDRD,PinNum);
			break ;
		}
	}
	else
	{
		// do nothing
	}
}



void DIO_WritePin(uint8 PortName  , uint8 PinNum,  uint8 Value)
{
	if (PortName == 'A')
	{
		switch(Value)
		{
		case 1 :
			SET_BIT(PORTA,PinNum);
			break ;
		case 0 :
			CLR_BIT(PORTA,PinNum);
			break ;
		}
	}

	else if (PortName == 'B')
	{
		switch(Value)
		{
		case 1 :
			SET_BIT(PORTB,PinNum);
			break ;
		case 0 :
			CLR_BIT(PORTB,PinNum);
			break ;
		}
	}

	else if (PortName == 'C')
	{
		switch(Value)
		{
		case 1 :
			SET_BIT(PORTC,PinNum);
			break ;
		case 0 :
			CLR_BIT(PORTC,PinNum);
			break ;
		}
	}
	else if (PortName == 'D')
	{
		switch(Value)
		{
		case 1 :
			SET_BIT(PORTD,PinNum);
			break ;
		case 0 :
			CLR_BIT(PORTD,PinNum);
			break ;
		}
	}

	else
	{
		// do nothing
	}
}




uint8 DIO_ReadPin(uint8 PortName  , uint8 PinNum)
{
	uint8 Read_Value;
	switch (PortName)
	{
	case 'A' :
		Read_Value =GET_BIT(PINA ,PinNum);
		break;
	case 'B' :
		Read_Value =GET_BIT(PINB ,PinNum);
		break;
	case 'C' :
		Read_Value =GET_BIT(PINC ,PinNum);
		break;
	case 'D' :
		Read_Value =GET_BIT(PIND ,PinNum);
		break;
	}

	return Read_Value;

}
