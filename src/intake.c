/*
 * intake.c
 *
 *  Created on: Dec 10, 2015
 *      Author: fibbonacci
 */

#include "main.h"


void intake() {

    if (joystickGetDigital(1, 8, JOY_UP)) {
      motorSet(1, 127);
    } else if (joystickGetDigital(1, 8, JOY_DOWN)) {
      motorSet(1, -127);
    } else {
      motorSet(1, 0);
    }
}



