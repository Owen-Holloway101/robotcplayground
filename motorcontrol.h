task MotorDLoop() {
int motorDAdd = 5;
	while(running) {
		if(motorDSpeed < 100 && motorDSpeed > -100){
			motorDSpeed += motorDAdd;
			wait1Msec(100);
			} else {
			motorDAdd *= -1;
			motorDSpeed += motorDAdd;
		}
	}
}

task MotorDPulse() {
while(running) {
	motorDSpeed = 100;
	wait1Msec(200);
	motorDSpeed = -100;
	wait1Msec(200);
}
}
