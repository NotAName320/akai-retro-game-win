#include "input.h"
#include "title.h"

//Will add functions for Title State

void drawTitle() {

  SDL_Surface* title = NULL;
  SDL_Surface* title_optimized = NULL;
  
  title = IMG_Load( "assets/graphics/title.png" );
  title_optimized = SDL_ConvertSurface( title, app.surface->format, 0);
  
  printf("IMG_Load: %s\n", IMG_GetError());
  SDL_BlitSurface( title_optimized, 0, app.surface, 0 );
  SDL_UpdateWindowSurface(app.window);
  
  SDL_Delay(2000);
   
}

void drawManual() {

  SDL_Surface* manual = NULL;
  SDL_Surface* manual_optimized = NULL;

  manual = IMG_Load( "assets/graphics/readme.png" );
  manual_optimized = SDL_ConvertSurface( manual, app.surface->format, 0);
  SDL_FreeSurface(manual);
  
  SDL_BlitSurface ( manual_optimized, NULL, app.surface, NULL );
  SDL_UpdateWindowSurface(app.window);

  SDL_Delay(2000);
  
}
