#ifndef MOTOR_H
#define MOTOR_H

#include "Actuator.h"

class Motor : public Actuator {
private:
    int speed;

public:
    Motor(int i);
    void activate() override;
    void printStatus() override;
    int getSpeed(); //adicionei essa função (tinha esquecido na prova)
};

#endif
