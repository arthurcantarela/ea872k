#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <memory>
#include "view.h"

class Player {
    private:
      float x = 0, y = 0;
      float speed = 1;
    public:
      SDL_Texture * texture;
      SDL_Rect collision_rect;
      Player();
      ~Player();
      void loadTexture(std::shared_ptr<View> view, char * asset);
      void setPos(float posX, float posY);
      void moveLeft();
      void moveRight();
      void moveUp();
      void moveDown();
      void updateCollisionRect();
};

#endif