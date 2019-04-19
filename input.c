#include "input.h"

int doInput(int state){
  SDL_Event event;
  void (*stateInputFunc[])(int) = {doTitleInput};
  while (SDL_PollEvent(&event)) {
    if(event.type == SDL_QUIT)
      return 0;
  }
  (*stateInputFunc[state])(event.type);
  return 1;
}

void doTitleInput(int event){
  int r, g, b;
  switch (event) {
  case SDL_MOUSEBUTTONDOWN:
    r = rand() % 255;
    g = rand() % 255;
    b = rand() % 255;
    
    SDL_SetRenderDrawColor(app.renderer, r, g, b, 255);
    break;
  }
}
