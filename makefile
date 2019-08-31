CC=gcc

akai-retro-game: main.c
	$(CC) -o akai.exe *.c -lSDL2main -lSDL2 -lmingw32 -lSDL2_image
