#include "player.h"

Player::Player() {}

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



