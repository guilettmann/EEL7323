#include "Controller.h"
#include <iostream>

Controller::Controller() {
    count = 0;
    for (int i = 0; i < 5; i++) {
        actuators[i] = nullptr;
    }
}

void Controller::addActuator(Actuator* a) {
    if (count < 5) {
        actuators[count] = a;
        count++;
    } else {
          throw TooManyActuatorsException(); // disparar a exceção TooManyActuatorsException ao tentar adicionar mais de 5 atuadores
    }
}

void Controller::showAll() {
    for (int i = 0; i < count; i++) {
        if (actuators[i] != nullptr)
            actuators[i]->printStatus();
    }
}

void Controller::activateAll() {
    for (int i = 0; i < count; i++) {
        if (actuators[i] != nullptr)
            actuators[i]->activate();
    }
}


