#include "player.h"

Player::Player() {}
Player::~Player() {
    SDL_DestroyTexture(texture);
}

void Player::loadTexture(std::shared_ptr<View> view, char * asset) {
    texture = view->loadTexture(asset);
    collision_rect.x = x;
    collision_rect.y = y;
    SDL_QueryTexture(
        texture, 
        nullptr, 
        nullptr, 
        &collision_rect.w, 
        &collision_rect.h
    );
}

void Player::setPos(float posX, float posY) {
    x = posX;
    y = posY;
}

void Player::moveLeft() {
    setPos(x + speed, y);
}

void Player::moveRight() {
    setPos(x - speed, y);
}

void Player::moveUp() {
    setPos(x, y - speed);
}

void Player::moveDown() {
    setPos(x, y + speed);
}

void Player::updateCollisionRect() {
    collision_rect.x = x;
    collision_rect.y = y;
}



