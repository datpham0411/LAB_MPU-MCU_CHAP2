/*
 * Exercise2.h
 *
 *  Created on: Sep 16, 2024
 *      Author: datph
 */

#ifndef INC_EXERCISE2_H_
#define INC_EXERCISE2_H_

#include "SW_timer.h"
void Exercise2_Init();
void Exercise2_Implement();
void choose7SEGtoDisplay(GPIO_TypeDef *GPIO_Type, uint16_t EnPin, uint16_t DisPin1, uint16_t DisPin2, uint16_t DisPin3);
#endif /* INC_EXERCISE2_H_ */
