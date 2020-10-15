#ifndef VIEW_H
#define VIEW_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class View {
    private:
        const int SCREEN_WIDTH = 640;
        const int SCREEN_HEIGHT = 480;
        SDL_Window * window = nullptr;
        SDL_Renderer * renderer = nullptr;
        SDL_Texture * background = nullptr;
    public:
        View();
        int init();
        SDL_Texture * loadTexture(char * asset_path);
        ~View();
};

#endif