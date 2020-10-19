#include "controller.h"

Controller::Controller() {
    view = std::shared_ptr<View>(new View);
    player = std::shared_ptr<Player>(new Player);
}

int Controller::init() {
    if(view->init()) {
        std::cerr << "Algo de errado não está certo" << std::endl;
        return 1;
    }
    std::cout << "Hello world" << std::endl;
    player->loadTexture(view, "../capi.png");
    running = true;
    return 0;
}

bool Controller::isRunning() {
    return running;
}

int Controller::play() {
    handleKeyboard();
    player->updateCollisionRect();
    
    SDL_Delay(10);
    return 0;
}

void Controller::handleKeyboard() {
    const Uint8 * state = SDL_GetKeyboardState(nullptr);

    SDL_PumpEvents();
    if (state[SDL_SCANCODE_LEFT]) player->moveLeft();
    if (state[SDL_SCANCODE_RIGHT]) player->moveRight();
    if (state[SDL_SCANCODE_UP]) player->moveUp();
    if (state[SDL_SCANCODE_DOWN]) player->moveDown();
}