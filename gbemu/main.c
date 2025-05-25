#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <emu.h>

int main(int argc, char **argv) {
    return emu_run(argc, argv);
}
