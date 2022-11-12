/*
 * WDT_Private.h
 *
 *  Created on: Sep 16, 2022
 *      Author: ali_l
 */

#ifndef MCAL_WDT_WDT_PRIVATE_H_
#define MCAL_WDT_WDT_PRIVATE_H_

#define   WDTCR_REG     *(volatile u8*)0x41

#define   WDE_BIT       3
#define   WDP2_BIT      2
#define   WDP1_BIT      1
#define   WDP0_BIT      0

#endif /* MCAL_WDT_WDT_PRIVATE_H_ */
