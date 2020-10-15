#include "controller.h"
#include <memory>

int main() {
    // std::shared_ptr<Controller> controller (new Controller);
    Controller * c = new Controller();
    while(1) {
        c->play();
    }
    return 0;
}