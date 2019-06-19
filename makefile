CC=gcc

akai-retro-game: main.c
	$(CC) -o akai *.c -lSDL2 -lSDL2_image
