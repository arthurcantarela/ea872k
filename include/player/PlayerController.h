#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H

#include "player/PlayerModel.h"
#include "player/PlayerView.h"
#include <memory>

class PlayerController {
    private:
        std::shared_ptr<PlayerModel> model;
        std::shared_ptr<PlayerView> view;
};

#endif