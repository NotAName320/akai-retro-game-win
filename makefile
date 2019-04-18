CC=gcc

retro-game: src/main.o
	$(CC) -o retro-game src/main.o -lSDL2
