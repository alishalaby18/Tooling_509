/*
 * Timer_Config.h
 *
 *  Created on: Sep 13, 2022
 *      Author: ali_l
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_
/*
 * TIMER_PRESCALER_DV OPTIONS: [1024,256]
 */
#define TIMER_PRESCALER_DV    1024
/*
 * SELECT F_OSC IN MEGA HERTZ
 */
#define F_OSC                 16
/*
 * SELECT TIMER0_MODE: [CTC_MODE, NORMAL_MODE]
 */
#define TIMER0_MODE   NORMAL_MODE
/*
 * SELECT PWM0_MODE2: [INVERTED , NON_INVERTED]
 */
#define PWM0_MODE2    INVERTED
/*
 * SELECT PWM0_MODE: [FAST_PWM , PHASE_CORRECT_MODE]
 */
#define PWM0_MODE    FAST_PWM

#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
