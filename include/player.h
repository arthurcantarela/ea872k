#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <string>
#include "view.h"

class Player {
    private:
      SDL_Texture * texture;
    public:
        Player();
        ~Player();
        void loadTexture(View view, char * asset);
};

#endif