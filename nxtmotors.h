//Owen Holloway 2013
//RSU Team-51

//NXT motor header
//tasks for making each NXT motor move can be found here

task TaskMotorA() {
	while(running) {
		motor[motorA] = motorASpeed;
	}
}

task TaskMotorB() {
	while(running) {
		motor[motorB] = motorBSpeed;
	}
}

task TaskMotorC() {
	while(running) {
		motor[motorC] = motorBSpeed;
	}
}
