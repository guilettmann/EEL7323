#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <iostream>
#include "esp_mac.h"
#include "esp_log.h" //adicionado

class Actuator {
protected:
    int id;

public:
    Actuator(int i);
    virtual void activate() = 0;
    virtual void printStatus();
};

#endif
