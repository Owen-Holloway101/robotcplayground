//Owen Holloway 2013
//RSU Team-51

//Matrix motor header
//Tasks for making each motor move can be found in here

task TaskMotorD() {
motor[motorD] = 10;
	wait1Msec(300);
	int motorDAdd = 5;
	while(running) {
		if(motor[motorD] < 100 && motor[motorD] > -100){
			motor[motorD] += motorDAdd;
			wait1Msec(100);
			} else {
			motorDAdd *= -1;
			motor[motorD] += motorDAdd;
		}
		motorDSpeed = motor[motorD];
	}
}
