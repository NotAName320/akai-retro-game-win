CC=gcc

rms-platformer: main.c
	$(CC) -o akai *.c -lSDL2 -lSDL2_image
