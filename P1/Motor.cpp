#include "Motor.h"
#include <iostream>

Motor::Motor(int i) : Actuator(i) {
    speed = 0;
}

void Motor::activate() {
    speed += 10;
}

void Motor::printStatus() {
    std::cout << "Tipo: Motor | ID: " << id << " | Velocidade: " << speed << std::endl;
}

