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
    running = true;
    return 0;
}

bool Controller::isRunning() {
    return running;
}

int Controller::play() {
    SDL_Delay(10);
    return 0;
}

Controller::~Controller() {
    running = false;
}