/*
 * DCMotor_Interface.h
 *
 *  Created on: Sep 20, 2022
 *      Author: ali_l
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_

#include "DIO_Interface.h"
#include "Timer_Interface.h"
#include "DCMotor_Config.h"

#define ACW               0
#define CW                1

void H_DCMotor_Void_DCMotorInit(void);
void H_DCMotor_Void_DCMotorSetSpeed(u32);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotortart(void);
void H_DCMotor_Void_DCMotorStop(void);

#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
