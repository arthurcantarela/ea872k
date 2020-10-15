#include "player.h"

Player::Player() {}
Player::~Player() {
    SDL_DestroyTexture(texture);
}

void Player::loadTexture(View view, char * asset) {
    texture = view.loadTexture(asset);
}


