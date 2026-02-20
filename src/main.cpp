#include <iostream>
#include <SDL.h>

int main() {

    std::cout << "Init program\n";

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cout << "SDL failed to initialize!";
        SDL_Quit();
        return -1;
    }

    SDL_Window *win = SDL_CreateWindow("Hellcast", 100, 100, 640, 360, SDL_WINDOW_SHOWN);

    if (!win) {
        std::cout << "SDL Window creation failed!";
        SDL_Quit();
        return -1;
    } else {

        bool done = false;

        while (!done) {

            SDL_Event e;

            SDL_WaitEvent(&e);

            if (e.type == SDL_QUIT) {
                done = true;
            }

            
        }
    }

    SDL_Quit();
    return 0;
}