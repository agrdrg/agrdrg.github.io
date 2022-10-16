void _start(void) {
	asm volatile("syscall" ::"a"(1), "D"(1), "S"("大威天龙\n"), "d"(13));
	asm volatile("syscall" ::"a"(60), "D"(0));
}
