CC=gcc
DEPS = src/main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $<

retro-game: src/main.o
	$(CC) -o retro-game src/main.o -lSDL2
