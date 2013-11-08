task sounds() {
while(running) {
	if (joy1Btn(1) == 1) {
		PlayImmediateTone(250, 1);
	}
}
}
