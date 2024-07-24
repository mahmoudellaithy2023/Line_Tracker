/*
 * DIO_interface.h
 *
 *  Created on: Feb 16, 2024
 *      Author: Mohamed Hany
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "../Common/STD_Types.h"
//prototypes

void DIO_SetPinDir(uint8 PortName  , uint8 PinNum,  uint8 Direction);

void DIO_WritePin(uint8 PortName  , uint8 PinNum,  uint8 Value);

uint8 DIO_ReadPin(uint8 PortName  , uint8 PinNum);























#endif /* DIO_INTERFACE_H_ */


