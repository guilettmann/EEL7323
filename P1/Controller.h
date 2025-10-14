#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Actuator.h"
#include "TooManyActuatorsException.h"

class Controller {
private:
    Actuator* actuators[5];
    int count;

public:
    Controller();
    void addActuator(Actuator* a);
    void showAll();
    void activateAll();
};

#endif

