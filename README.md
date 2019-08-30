# akai-retro-game

## Development Status

As of August 29th, 2019, this repository is active.

## Installation

### Binaries

Binaries and/or installers have not been published yet. If you are interested in experimenting with this game while it is still in development, proceed to [building from source](#build-from-source).

### Build from source

#### Prerequisites (Linux)

We use `libsdl2` and `libsdl-image` in this project. Please make sure you install them before compiling. You can usually find them in your package manager as:

##### SDL

* `libsdl2`
* `sdl2`
* `sdl2`

##### SDL-Image

* `libsdl2-image`
* `sdl2-image`
* `sdl2_image`

#### Prerequisites (macOS)

Before compiling, make sure to install [Homebrew](https://brew.sh/) on your system. This is necessary to install the libraries.
After installing Homebrew, install the required libraries by running the following command:

    brew install sdl2 sdl2_image

####Prerequisites (Windows)
You must have [MinGW](http://www.mingw.org/), and [SDL2](https://www.libsdl.org/download-2.0.php) and [SDL2_image](https://www.libsdl.org/projects/SDL_image/) (Install the Windows MinGW Development libraries).

####Building

Once the libraries are installed, you can proceed to build and run the program.

```
cd path/to/akai-retro-game
make
./akai
```

Or on Windows:
```
cd C:\<installation-dir>
make
akai
```
