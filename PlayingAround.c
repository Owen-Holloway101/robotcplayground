//Owen Holloway 2013
//A change
//RSU Team-51

//Config
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

#define true 1
#define false 0

int running = 1;
int loopTime = 0;
int motorSpeed = 0;

task main()
{
	//StartTask(Hello);
	motor[motorA] = 10;
	wait1Msec(300);
	while(running) {
		int accl = 5;
		for(int i = 0; i < 100; i++) {
			if(motor[motorA] < 100 && motor[motorA] > -100){
				motor[motorA] += accl;
				wait1Msec(100);
			} else {
				accl = accl * -1;
				motor[motorA] += accl;
			}
			motorSpeed = motor[motorA];
			loopTime = i;
		}
		running = 0;
	}
}
