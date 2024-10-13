/*
 * SW_timer.h
 *
 *  Created on: Sep 11, 2024
 *      Author: datph
 */

#ifndef INC_SW_TIMER_H_
#define INC_SW_TIMER_H_
#include "Exercise1.h"
#include "Exercise2.h"

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int status;


void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();
void update7SEG(int index, int num);
#endif /* INC_SW_TIMER_H_ */
