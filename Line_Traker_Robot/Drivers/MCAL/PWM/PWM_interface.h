/*
 * PWM_interface.h
 *
 *  Created on: Feb 24, 2024
 *      Author: Mohamed Hany
 */

#ifndef PWM_INTERFACE_H_
#define PWM_INTERFACE_H_

#include "../Common/STD_Types.h"

void PWM_Init(void);
void PWM_FAST_SetMode(uint8 Mode);
void PWM_SetOCRValue(uint8 Value);



#endif /* PWM_INTERFACE_H_ */
