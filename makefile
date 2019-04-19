CC=gcc

retro-game: main.c
	$(CC) -o retrogame *.c -lSDL2
