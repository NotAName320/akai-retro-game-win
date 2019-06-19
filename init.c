#include "init.h"
#include "title.h"
void initSDL(){
  SDL_Init(SDL_INIT_VIDEO);
  app.window = SDL_CreateWindow("Retro Game", SDL_WINDOWPOS_UNDEFINED,
			    SDL_WINDOWPOS_UNDEFINED, WINDOW_LENGTH, WINDOW_HEIGHT,
			    SDL_WINDOW_OPENGL);
  app.surface = SDL_GetWindowSurface( app.window );
  app.renderer = SDL_CreateRenderer(app.window, -1,
				SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  SDL_SetRenderDrawColor(app.renderer, 255, 0, 0, 255);
  drawTitle();
}

void closeSDL(){
  SDL_DestroyRenderer(app.renderer);
  SDL_DestroyWindow(app.window);
  SDL_Quit();
}
