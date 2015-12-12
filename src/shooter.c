#include "main.h"

void shoot()
{
	//sets shooter speed to each motor


	if(joystickGetDigital(1, 6, JOY_UP))
	{
		setShooter((int)(0.9 * 127));
	}
	else
	{
		setShooter(0);
	}

}


void setShooter(int speed)
{
	for(int i = 4; i< 8; i++)
	{
		motorSet(i, speed);
	}

}
