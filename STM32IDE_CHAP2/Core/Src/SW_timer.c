/*
 * SW_timer.c
 *
 *  Created on: Sep 11, 2024
 *      Author: datph
 */

#include "SW_timer.h"

int timer0_counter = 0;
int timer0_flag = 0;
int TIMER_CYCLE = 10; // ms
int timer1_counter = 0;
int timer1_flag = 0;
int timer2_counter = 0;
int timer2_flag = 0;
int status = 4;

void setTimer0(int duration) {
	timer0_counter = duration/TIMER_CYCLE;
	timer0_flag = 0;
}

void setTimer1(int duration) {
	timer1_counter = duration;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}

void timerRun() {
	if (timer0_counter <= 0) timer0_flag = 1;
	else --timer0_counter;
		if (timer1_counter <= 0){
			timer1_flag = 1;
			switch (status) {
				case 1:
					++status;
					break;
				case 2:
					++status;
					break;
				case 3:
					++status;
					break;
				case 4:
					++status;
					break;
				default:
					status = 1;
					break;
			}
		}
		else --timer1_counter;
	if (timer2_counter <= 0) timer2_flag = 1;
	else --timer2_counter;
}

void update7SEG(int index, int num) {
	display7SEG(num);
	switch (index) {
		case 1: // Display the first 7 SEG with led_buffer [0]
			choose7SEGtoDisplay(GPIOA, EN0_Pin, EN1_Pin, EN2_Pin, EN3_Pin);
			break ;
		case 2: // Display the second 7 SEG with led_buffer [1]
			choose7SEGtoDisplay(GPIOA, EN1_Pin, EN0_Pin, EN2_Pin, EN3_Pin);
			break ;
		case 3: // Display the third 7 SEG with led_buffer [2]
			choose7SEGtoDisplay(GPIOA, EN2_Pin, EN0_Pin, EN1_Pin, EN3_Pin);
			break ;
		case 4: // Display the forth 7 SEG with led_buffer [3]
			choose7SEGtoDisplay(GPIOA, EN3_Pin, EN0_Pin, EN1_Pin, EN2_Pin);
			break ;
		default :
			break ;
	}
}

