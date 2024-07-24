/*
 * PWM_program.c
 *
 *  Created on: Feb 24, 2024
 *      Author: Mohamed Hany
 */
#include <avr/io.h>
#include "../Common/STD_Types.h"
#include "../Common/BIT_Math.h"
#include "PWM_interface.h"

void PWM_Init(void)
{
	//set Mode in fast PWM
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	//cofigure prescaler


	//prescaler is 8 --- >Fcpu\8
	CLR_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);

}




void PWM_FAST_SetMode(uint8 Mode)
{
	// recive 0 or 1
	// 0 -->inverting
	// 1--->noninverting
	//inverting    OCR increas ---> Duty is reduced
	//noninverting  OCR increas ---> Duty is increased
	switch(Mode)
	{
	case 0:
		SET_BIT(TCCR0,COM00);
		SET_BIT(TCCR0,COM01);
		break;
	case 1 :
		CLR_BIT(TCCR0,COM00);
		SET_BIT(TCCR0,COM01);
		break;
	}
}


//send value to be stored in OCR0 REG
//used to set Duty cucle
//based on mode -->inverting or noninverting
void PWM_SetOCRValue(uint8 Value)
{
	OCR0 =Value;
}




/////////////////////////////////////
/*
void PWM_Init(uint8 Mode ,uint8 Prescaler)
{
	//set Mode in fast PWM
	switch (Mode)
	{
	case 0 :
		//normal mode
		break;
	case 1 :
		//CTC mode
		break;
	case 2 :
		//fasr PWM mode
		//set Mode in fast PWM
		SET_BIT(TCCR0,WGM00);
		SET_BIT(TCCR0,WGM01);
		break;
	case 3 :
		//phase corect PWM mode
		break;

	}


	//cofigure prescaler
	switch(Prescaler)
	{
	case 1 :
		//ps =1
		break;
	case 2 :
		//ps 8
		//prescaler is 8 --- >Fcpu\8
			CLR_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
			CLR_BIT(TCCR0,CS02);

		break ;
	}

}
*/
