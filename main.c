#include "main.h"

int main(int argc, char *argv[]){
  int running = 1;
  currentState = TITLE_STATE;
  memset(&app, 0, sizeof(App));
  initSDL();
    
  while (running){
    running = doInput(currentState);
    SDL_RenderClear(app.renderer);
    SDL_RenderPresent(app.renderer);
  }

  closeSDL();
  return 0;
}
