#include "view.h"

View::View() {}

int View::init() {
    // Inicializando o subsistema de video do SDL
    if ( SDL_Init (SDL_INIT_VIDEO) < 0 ) {
        std::cerr << SDL_GetError();
        return 1;
    }

    // Criando uma janela
    SDL_Window * window = nullptr;
    window = SDL_CreateWindow("Demonstracao do SDL2",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        SDL_WINDOW_SHOWN);
    if (window==nullptr) { // Em caso de erro...
        std::cerr << SDL_GetError();
        SDL_Quit();
        return 1;
    }

    // Inicializando o renderizador
    SDL_Renderer * renderer = SDL_CreateRenderer(
        window, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer==nullptr) { // Em caso de erro...
        SDL_DestroyWindow(window);
        std::cerr << SDL_GetError();
        SDL_Quit();
        return 1;
    }

    return 0;
}

/* Load an asset into a render texture and return it to the model */
SDL_Texture * View::loadTexture(char * asset) {
    SDL_Texture * texture = IMG_LoadTexture(renderer, asset);
    return texture;
}

View::~View() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
