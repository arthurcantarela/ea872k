#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "view.h"
#include "player.h"
#include <memory>

class Controller {
    private:
        std::shared_ptr<View> view;
        std::shared_ptr<Player> player;
        bool running = false;
    public:
        Controller();
        int init();
        bool isRunning();
        int play();
        void handleKeyboard();
};

#endif