/**
 * @file Activity3.h
 * @author AshrikaMishra13
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __Activity3_H__
#define __Activity3_H__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t temp_value);
void InitPWM(void);
#endif
