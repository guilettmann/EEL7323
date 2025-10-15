#include "Motor.h"


Motor::Motor(int i) : Actuator(i) {
    speed = 0;
}

void Motor::activate() {
    speed += 10;
}

void Motor::printStatus() {
    ESP_LOGI("MOTOR", "Tipo: Motor | ID: %d | Velocidade: %d", id, speed);
}

int Motor::getSpeed() {
    return speed;
}
