task Hello() {
	for (int i = 0; i < 20000; i++) {
		writeDebugStream("Running: %d", i);
		upTo = i;
	}
	running = 0;
}
