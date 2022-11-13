/*
 * display_led.c
 *
 *  Created on: Nov 12, 2022
 *      Author: ASUS
 */

#include "display_led.h"
#include "global.h"
#include "main.h"

void display7SEG(int num)
{

	if(num == 0){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, SET);
	}
	if(num == 1){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, SET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, SET);
	}
	if(num == 2){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, SET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
	if(num == 3){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
	if(num == 4){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, SET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
	if(num == 5){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, SET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
	if(num == 6){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, SET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
	if(num == 7){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, SET);
	}
	if(num == 8){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
	if(num == 9){
		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
		HAL_GPIO_WritePin(SEGA7_GPIO_Port, SEGA7_Pin, RESET);
	}
}
void display7SEG_2(int num)
{

	if(num == 0){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, SET);
	}
	if(num == 1){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, SET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, SET);
	}
	if(num == 2){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, SET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
	if(num == 3){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
	if(num == 4){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, SET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
	if(num == 5){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, SET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
	if(num == 6){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, SET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
	if(num == 7){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, SET);
	}
	if(num == 8){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
	if(num == 9){
		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
		HAL_GPIO_WritePin(SEGB7_GPIO_Port, SEGB7_Pin, RESET);
	}
}

void update7SEG ( int index ){
 switch ( index ) {
 case 0:
 // Display the first 7 SEG with led_buffer [0]
	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	 display7SEG(led_buffer[index]);
 break ;
 case 1:
 // Display the second 7 SEG with led_buffer [1]
	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	 display7SEG(led_buffer[index]);
 break ;
 default :
 break ;
 }
}
void update7SEG_2 ( int index ){
 switch ( index ) {
 case 2:
 // Display the first 7 SEG with led_buffer [0]
	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
	 HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
	 display7SEG_2(led_buffer[index]);
 break ;
 case 3:
 // Display the second 7 SEG with led_buffer [1]
	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	 HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, RESET);
	 display7SEG_2(led_buffer[index]);
 break ;
 default :
 break ;
 }
}
void Increase_time(int mode){
	led_buffer[0] = mode/10;
	led_buffer[1] = mode%10;
}
void Increase_time_2(int mode2){
	led_buffer[2] = mode2/10;
	led_buffer[3] = mode2%10;
}
