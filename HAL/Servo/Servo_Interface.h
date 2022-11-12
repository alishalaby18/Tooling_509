/*
 * Servo_Interface.h.h
 *
 *  Created on: Sep 20, 2022
 *      Author: ali_l
 */

#ifndef HAL_SERVO_SERVO_INTERFACE_H_
#define HAL_SERVO_SERVO_INTERFACE_H_

#include "Timer_Interface.h"
#include "STD.h"

void H_Servo_Void_ServoInit(void);
void H_Servo_Void_ServoSetAngle(u8);
void H_Servo_Void_ServoSetStart(void);
void H_Servo_Void_ServoSetStop(void);


#endif /* HAL_SERVO_SERVO_INTERFACE_H_ */
