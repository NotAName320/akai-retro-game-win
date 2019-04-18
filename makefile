CC=gcc

retro-game: main.c
	$(CC) -o retro-game main.c title.c input.c -lSDL2
