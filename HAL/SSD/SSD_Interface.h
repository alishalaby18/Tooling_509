/*
 * SSD_Interface.h
 *
 *  Created on: Sep 1, 2022
 *      Author: ali_l
 */

#ifndef HAL_SSD_SSD_INTERFACE_H_
#define HAL_SSD_SSD_INTERFACE_H_
//********************************************_INCLUDES_*************************************************
#include "DIO_Interface.h"
#include "SSD_Config.h"
#include "STD.h"
#include <util/delay.h>
//********************************************_PROTOTYPES_*************************************************
void H_SSD_Void_SSDInit(void);
void H_SSD_Void_SSDWriteNumber(u8);
#endif /* HAL_SSD_SSD_INTERFACE_H_ */

