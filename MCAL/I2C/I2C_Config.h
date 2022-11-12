/*
 * I2C_Config.h
 *
 *  Created on: Sep 23, 2022
 *      Author: ali_l
 */

#ifndef MCAL_I2C_I2C_CONFIG_H_
#define MCAL_I2C_I2C_CONFIG_H_

//SELECT SLAVE ADDRESS OPTIONS: [1->119]
#define SLAVE_ADDRESS                1
//GENERAL_CALL_RESPONSE OPTIONS: [1,0]
#define GENERAL_CALL_RESPONSE        0
//I2C_MODE OPTIONS  : [I2C_MASTER_MODE, I2C_SALVE_MODE]
#define I2C_MODE     I2C_MASTER_MODE
#endif /* MCAL_I2C_I2C_CONFIG_H_ */
