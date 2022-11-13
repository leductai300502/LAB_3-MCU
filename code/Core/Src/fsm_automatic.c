/*
 * fsm_automatic.c
 *
 *  Created on: Nov 12, 2022
 *      Author: ASUS
 */


#include "fsm_automatic.h"
#include "software_timer.h"
#include "global.h"
#include "main.h"
#include "display_led.h"


void fsm_automatic_run(){
	switch(status){
	case INIT:
		status = AUTO_RED;
		setTimer1(MAX_RED*100);
		setTimer2(100);
		setTimer4(50);
		index_led =0;
		break;
	case AUTO_RED:
		if(num_red == 0) num_red = MAX_RED;
		if(index_led > 1) index_led =0;
		Increase_time(num_red);
		update7SEG(index_led);
		if(timer2_flag == 1){
			num_red--;
			setTimer2(100);
		}
		if(timer4_flag == 1)
		{
			index_led++;
			setTimer4(50);
		}
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		if(timer1_flag == 1){
			status = AUTO_GREEN;
			setTimer1(MAX_GREEN*100);
			num_green =0;
			setTimer2(100);
			setTimer4(50);
			index_led =0;
		}
		if(is_Button1_Pressed() == 1)
		{
			status = MAN_RED;
			setTimer2(50);
			index_led =0;
			index_led2 =2;
		}
		break;
	case AUTO_GREEN:
		if(num_green == 0) num_green = MAX_GREEN;
		if(index_led > 1) index_led =0;
		Increase_time(num_green);
		update7SEG(index_led);
		if(timer2_flag == 1){
			num_green--;
			setTimer2(100);
		}
		if(timer4_flag == 1)
		{
			index_led++;
			setTimer4(50);
		}
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		if(timer1_flag == 1){
			status = AUTO_YELLOW;
			num_yellow=0;
			setTimer1(MAX_YELLOW*100);
			setTimer2(100);
			setTimer4(50);
			index_led = 0;
		}
		if(is_Button1_Pressed() == 1)
		{
			status = MAN_RED;
			setTimer2(50);
			index_led =0;
			index_led2 =2;
		}
		break;
	case AUTO_YELLOW:
		if(num_yellow == 0) num_yellow = MAX_YELLOW;
		if(index_led > 1) index_led =0;
		Increase_time(num_yellow);
		update7SEG(index_led);
		if(timer2_flag == 1){
			num_yellow--;
			setTimer2(100);
		}
		if(timer4_flag == 1)
		{
			index_led++;
			setTimer4(50);
		}
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		if(timer1_flag == 1){
			status = AUTO_RED;
			num_red=0;
			setTimer1(MAX_RED*100);
			setTimer2(100);
			setTimer4(50);
			index_led = 0;
		}
		if(is_Button1_Pressed() == 1)
		{
			status = MAN_RED;
			setTimer2(50);
			index_led =0;
			index_led2 =2;
		}
		break;
	default:
		break;
	}
}
//---fsm_automatic_2-------
void fsm_automatic_2_run(){
	switch(status_2){
	case INIT:
		status_2 = AUTO_GREEN;
		setTimer3(MAX_GREEN*100);
		setTimer5(100);
		setTimer6(50);
		index_led2 =2;
		num_green2 =0;
		break;
	case AUTO_RED:
		if(index_led2 >3 ) index_led2 = 2;
		if(num_red2 == 0) num_red2 = MAX_RED2;
		Increase_time_2(num_red2);
		update7SEG_2(index_led2);
		if(timer5_flag == 1){
			num_red2--;
			setTimer5(100);
		}
		if(timer6_flag == 1)
		{
			index_led2++;
			setTimer6(50);
		}
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if(timer3_flag == 1){
			status_2 = AUTO_GREEN;
			setTimer3(MAX_GREEN2*100);
			setTimer5(100);
			setTimer6(50);
			num_green2 =0;
		}
		if(status == MAN_RED)
		{
			status_2 = 100;
		}
		break;
	case AUTO_GREEN:
		if(index_led2 >3 ) index_led2 = 2;
		if(num_green2 == 0) num_green2 = MAX_GREEN2;
		Increase_time_2(num_green2);
		update7SEG_2(index_led2);
		if(timer5_flag == 1){
			num_green2--;
			setTimer5(100);
		}
		if(timer6_flag == 1)
		{
			index_led2++;
			setTimer6(50);
		}
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if(timer3_flag == 1){
			status_2 = AUTO_YELLOW;
			num_yellow2=0;
			setTimer3(MAX_YELLOW2*100);
			setTimer5(100);
			setTimer6(50);
		}
		if(status == MAN_RED)
		{
			status_2 = 100;

		}
		break;
	case AUTO_YELLOW:
		if(index_led2 >3 ) index_led2 = 2;
		if(num_yellow2 == 0) num_yellow2 = MAX_YELLOW2;
		Increase_time_2(num_yellow2);
		update7SEG_2(index_led2);
		if(timer5_flag == 1){
			num_yellow2--;
			setTimer5(100);
		}
		if(timer6_flag == 1)
		{
			index_led2++;
			setTimer6(50);
		}
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
		if(timer3_flag == 1){
			status_2 = AUTO_RED;
			num_red2=0;
			setTimer3(MAX_RED2*100);
			setTimer5(100);
			setTimer6(50);
		}
		if(status_2 == MAN_RED)
		{
			status_2 = 100;
		}
		break;
	default:
		break;
	}
}
