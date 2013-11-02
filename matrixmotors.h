//Owen Holloway 2013
//RSU Team-51

//Matrix motor header
//Tasks for making each motor move can be found in here

task TaskMotorD() {
	while(running) {
		motor[motorD] = motorDSpeed;
	}
}

task TaskMotorE() {
	while(running) {
		motor[motorE] = motorESpeed;
	}
}
