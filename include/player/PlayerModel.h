#ifndef PLAYERMODEL_H
#define PLAYERMODEL_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <memory>

class PlayerModel {
    private:
      float x = 0, y = 0;
      float speed = 1;
    public:
      PlayerModel();
      void setPos(float posX, float posY);
      void moveLeft();
      void moveRight();
      void moveUp();
      void moveDown();
};

#endif