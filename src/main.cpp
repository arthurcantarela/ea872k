#include "maze.h"
#include "controller.h"
#include <memory>

int main() {
    // std::shared_ptr<Controller> controller (new Controller);
    // Controller * c = new Controller();
    // c->init();
    // while(c->isRunning()) {
    //     c->play();
    // }
    Maze * m = new Maze();
    m->generate();
    m->print();
    return 0;
}