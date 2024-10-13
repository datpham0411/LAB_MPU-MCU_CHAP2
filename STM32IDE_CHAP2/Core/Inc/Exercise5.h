/*
 * Exercise5.h
 *
 *  Created on: Sep 23, 2024
 *      Author: datph
 */

#ifndef INC_EXERCISE5_H_
#define INC_EXERCISE5_H_
//#include "Exercise1.h"
//#include "Exercise2.h"
#include "Exercise3.h"
//#include "Exercise4.h"
//#include "stdio.h"
#include "main.h"
#include "SW_timer.h"

void Exercise5_Init();
void Exercise5_Implement();
void updateClockBuffer(int hour, int minute, int second, int *led_buffer_0, int* led_buffer_1, int* led_buffer_2);

#endif /* INC_EXERCISE5_H_ */
