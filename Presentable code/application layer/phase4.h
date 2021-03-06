/*
 * phase4.h
 *
 *  Created on: Feb 7, 2020
 *      Author: mosta
 */

#ifndef APPLICATION_PHASE4_H_
#define APPLICATION_PHASE4_H_
/*******************************************************************************
 *                              INCLUDES                                       *
 *******************************************************************************/
#include "../micro_config.h"
#include "../std_types.h"
#include "../mcal/pwm/pwm.h"
#include "../hal/motor/motor.h"
#include "../mcal/interrupt/interrupt.h"
#include "../mcal/timer/timer.h"
#include "../mcal/timer counter/timer counter.h"
#include "../hal/lcd/lcd.h"
#include <stdio.h>
#include "../hal/ultrasonic/ultrasonic.h"
#include "../mcal/uart/uart.h"
#include "../hal/wifi/wifi.h"

/*******************************************************************************
 *                          FUNCTIONS DECLARATIONS                              *
 *******************************************************************************/
void phase4(void);

#endif /* APPLICATION_PHASE4_H_ */
