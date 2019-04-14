#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <SDL2/SDL.h>

static const int width = 960;
static const int height = 540;

int r;
int g;
int b;

int main(int argc, char **argv) {

  SDL_Init(SDL_INIT_VIDEO);

  // Create renderer and window
  SDL_Window *window = SDL_CreateWindow("Hello SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);
  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  
  bool running = true;
  SDL_Event event;
  
  while (running) {

    while (SDL_PollEvent(&event)) {

      switch (event.type) {

        case SDL_QUIT:
	  running = false;
	  break;
        case SDL_MOUSEBUTTONDOWN:
	  r = rand() % 255;
	  g = rand() % 255;
	  b = rand() % 255;

	  SDL_SetRenderDrawColor(renderer, r, g, b, 255);
	  break;
	  
      }

    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  
  return 0;

}
