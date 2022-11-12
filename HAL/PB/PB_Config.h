/*
 * PB_Config.h
 *
 *  Created on: Aug 27, 2022
 *      Author: ali_l
 */

#ifndef HAL_PB_PB_CONFIG_H_
#define HAL_PB_PB_CONFIG_H_
/*
 * SELECT PB_MODE : ACTIVE_HIGH , ACTIVE_LOW
 */
#define PB_MODE    ACTIVE_HIGH

/*
 * SELECT PBs_PIN
 */
#define PUSH_BUTTON0_PIN PB0_PIN
#define PUSH_BUTTON1_PIN PD6_PIN
#define PUSH_BUTTON2_PIN PD2_PIN

/*
 * SELECT PB_DEBOUNCING_TIME
 */
#define PB_DEBOUNCING_TIME 130

#endif /* HAL_PB_PB_CONFIG_H_ */
