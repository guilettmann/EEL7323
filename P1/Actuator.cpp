#include "Actuator.h"

Actuator::Actuator(int i) {
    id = i;
}

void Actuator::printStatus() {
    std::cout << "Tipo: Actuator | ID: " << id << std::endl;
}
