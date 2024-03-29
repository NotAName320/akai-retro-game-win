#include "input.h"
#include "title.h"

int doInput(int state){
  SDL_Event event;
  void (*stateInputFunc[])(SDL_Event) = {doTitleInput};
  while (SDL_PollEvent(&event)) {
    if(event.type == SDL_QUIT)
      return 0;
  }
  (*stateInputFunc[state])(event);
  return 1;
}

void doTitleInput(SDL_Event event) {
  
  switch (event.key.keysym.sym) {
  case SDL_KEYDOWN:

    case SDLK_1:

      drawTitle();
      break;
      
    case SDLK_2:

      drawManual();
      break;

  }
     
}
