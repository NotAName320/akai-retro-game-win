# akai-retro-game

## Development Status

As of June 18th, 2019, this repository is active.

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

```brew install sdl2 sdl2_image```

#### Building

Once the libraries are installed, you can proceed to build and run the program.

```
cd path/to/akai-retro-game
make
./akai
```
