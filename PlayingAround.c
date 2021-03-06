//Owen Holloway 2013
//RSU Team-51

/*
This is the playing around file I used to get used to the
ROBOTC interface and language
*/

//Config for motors sensors and the such
#pragma config(Hubs,   S1, MatrxRbtcs, none,     none,     none)
#pragma config(Hubs,   S2, MatrxRbtcs, none,     none,     none)
#pragma config(Sensor, S1,           ,sensorI2CMuxController)
#pragma config(Sensor, S2,           ,sensorI2CMuxController)
#pragma config(Motor,  motorA,          MotorA, tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          MotorB, tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          MotorC, tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_Matrix_S1_1, MotorD, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S1_2, MotorE, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S1_3, MotorF, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S1_4, MotorG, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S2_1, MotorH, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S2_2, MotorI, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S2_3, MotorJ, tmotorMatrix, openLoop)
#pragma config(Motor,  mtr_Matrix_S2_4, MotorK, tmotorMatrix, openLoop)
#pragma config(Servo, srvo_Matrix_S1_1, servo1, tServoStandard)
#pragma config(Servo, srvo_Matrix_S1_2, servo2, tServoStandard)
#pragma config(Servo, srvo_Matrix_S1_3, servo3, tServoStandard)
#pragma config(Servo, srvo_Matrix_S1_4, servo4, tServoStandard)
#pragma config(Servo, srvo_Matrix_S2_1, servo5, tServoStandard)
#pragma config(Servo, srvo_Matrix_S2_2, servo6, tServoStandard)
#pragma config(Servo, srvo_Matrix_S2_3, servo7, tServoStandard)
#pragma config(Servo, srvo_Matrix_S2_4, servo8, tServoStandard)


//External drivers
#include "JoystickDriver.c"

#define true 1
#define false 0

int running = 1;
int motorASpeed = 0;
int motorBSpeed = 0;
int motorCSpeed = 0;
int motorDSpeed = 0;
int motorESpeed = 0;

int j1_s1_x = 0;
int j1_s1_y = 0;

int j1_s2_x = 0;
int j1_s2_y = 0;

#include "nxtmotors.h"
#include "matrixmotors.h"
#include "matrixservos.h"
#include "motorcontrol.h"
#include "screen.h"
#include "controller.h"
#include "sounds.h"

task main() {
	nVolume = 4;

	//NXT Motor tasks
	StartTask(TaskMotorA);
	StartTask(TaskMotorB);
	StartTask(TaskMotorC);

	//Matrix 1 motor tasks
	StartTask(TaskMotorD);
	StartTask(TaskMotorE);

	//Matrix 1 servo tasks
	StartTask(TaskServo1);

	//Display task
	StartTask(screenDisplay);

	//Sounds task
	StartTask(sounds);

	//Controller
	StartTask(controllerSet);
	StartTask(motorControl);

	//Motor Control
	while(running) {
		wait10Msec(10000);
		running = 0;
	}
}
