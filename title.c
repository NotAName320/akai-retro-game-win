#include "input.h"
#include "title.h"

//Will add functions for Title State

// Title
SDL_Surface* title = NULL;
SDL_Surface* title_optimized = NULL;
SDL_Rect stretchRect;

// Manual
SDL_Surface* manual = NULL;
SDL_Surface* manual_optimized = NULL;
  

void loadTitle() {

  title = IMG_Load( "assets/graphics/title.png" );
  title_optimized = SDL_ConvertSurface( title, app.surface->format, 0);
  stretchRect.x = 0;
  stretchRect.y = 0;
  stretchRect.w = WINDOW_LENGTH;
  stretchRect.h = WINDOW_HEIGHT;
  
}

void loadManual() {

  manual = IMG_Load( "assets/graphics/manual.png" );
  manual_optimized = SDL_ConvertSurface( manual, app.surface->format, 0);

}

void drawTitle() {

  SDL_BlitScaled( title_optimized, NULL, app.surface, &stretchRect );
  SDL_UpdateWindowSurface(app.window);
 
}


void drawManual() {
   
  SDL_BlitSurface ( manual_optimized, NULL, app.surface, NULL );
  SDL_UpdateWindowSurface(app.window);
  
}
