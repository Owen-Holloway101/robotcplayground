//Owen Holloway 2013
//RSU Team-51

//NXT motor header
//tasks for making each NXT motor move can be found here

task TaskMotorA() {
	motor[motorA] = 10;
	wait1Msec(300);
	int motorAAdd = 5;
	while(running) {
		if(motor[motorA] < 100 && motor[motorA] > -100){
			motor[motorA] += motorAAdd;
			wait1Msec(100);
			} else {
			motorAAdd *= -1;
			motor[motorA] += motorAAdd;
		}
		motorASpeed = motor[motorA];
	}
}

task TaskMotorB() {
	motor[motorB] = 10;
	wait1Msec(300);
	int motorBAdd = 5;
	while(running) {
		if(motor[motorB] < 100 && motor[motorB] > -100){
			motor[motorB] += motorBAdd;
			wait1Msec(100);
			} else {
			motorBAdd *= -1;
			motor[motorB] += motorBAdd;
		}
		motorBSpeed = motor[motorB];
	}
}
/*
task TaskMotorC() {
}
*/
