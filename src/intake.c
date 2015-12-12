#include "main.h"


void intake() {

	//sets intake
	if (joystickGetDigital(1, 6, JOY_DOWN))
	{
		motorSet(1, 127);
	}
	else if (joystickGetDigital(1, 8, JOY_DOWN))
	{
		motorSet(1, -127);
	}

	else
	{
		motorSet(1, 0);
	}

	//sets lift
	if (joystickGetDigital(1, 6, JOY_DOWN))
	{
		motorSet(10, 127);
	}
	else if (joystickGetDigital(1, 5, JOY_UP))
	{
		motorSet(10, -127);
	}
	else
	{
		motorSet(10, 0);
	}
}



