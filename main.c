#include "main.h"

void initSDL(){
  SDL_Init(SDL_INIT_VIDEO);
  app.window = SDL_CreateWindow("Hello SDL", SDL_WINDOWPOS_UNDEFINED,
			    SDL_WINDOWPOS_UNDEFINED, WINDOW_LENGTH, WINDOW_HEIGHT,
			    SDL_WINDOW_OPENGL);
  app.renderer = SDL_CreateRenderer(app.window, -1,
				SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  SDL_SetRenderDrawColor(app.renderer, 255, 0, 0, 255);
}

void closeSDL(){
  SDL_DestroyRenderer(app.renderer);
  SDL_DestroyWindow(app.window);
  SDL_Quit();
}

int main(){
  memset(&app, 0, sizeof(App));
  initSDL();
  currentState = TITLE_STATE;
  int running = 1;
  
  while (running){
    running = doInput(currentState);
    SDL_RenderClear(app.renderer);
    SDL_RenderPresent(app.renderer);
  }

  closeSDL();
  return 0;
}
