/*
 * WDT_Prog.c
 *
 *  Created on: Sep 16, 2022
 *      Author: ali_l
 */

#include "WDT_Interface.h"
#include "WDT_Private.h"

void M_WDT_Void_WDTInit(void)
{
	//to enable wdt
	SET_BIT(WDTCR_REG,WDE_BIT);
	//to select 2.1 second as window time
	SET_BIT(WDTCR_REG,WDP0_BIT);
	SET_BIT(WDTCR_REG,WDP1_BIT);
	SET_BIT(WDTCR_REG,WDP2_BIT);
}
void M_WDT_Void_WDTRefresh(void)
{
	asm("WDR");
}
