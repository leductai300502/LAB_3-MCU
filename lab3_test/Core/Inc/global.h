/*
 * global.h
 *
 *  Created on: Nov 2, 2022
 *      Author: ASUS
 */
#include "software_timer.h"
#include "Button.h"
#include "main.h"
#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 1
#define AUTO_RED 2
#define AUTO_GREEN 3
#define AUTO_YELLOW 4

#define MAN_RED 12
#define MAN_GREEN 13
#define MAN_YELLOW 14

extern int status;
extern int status_2;
extern int num_red;
extern int num_yellow;
extern int num_green;
extern int num_red2;
extern int num_yellow2;
extern int num_green2;

extern int MAX_RED;
extern int MAX_GREEN;
extern int MAX_YELLOW;
extern int MAX_RED2;
extern int MAX_GREEN2;
extern int MAX_YELLOW2;

#endif /* INC_GLOBAL_H_ */
