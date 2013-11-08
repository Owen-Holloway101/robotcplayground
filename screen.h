task screenDisplay() {
while(running) {
	eraseDisplay();
	nxtDisplayTextLine(1,"j1_s1_x: %i",j1_s1_x);
	nxtDisplayTextLine(2,"j1_s1_y: %i",j1_s1_y);
	nxtDisplayTextLine(3,"j1_s2_x: %i",j1_s2_x);
	nxtDisplayTextLine(4,"j1_s2_y: %i",j1_s2_y);
	wait1Msec(10);
}
}
