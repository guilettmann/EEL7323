#include "LED.h"
#include <iostream>

LED::LED(int i) : Actuator(i) {
    intensity = false;
}

void LED::activate() {
    // alterna entre 0 e 1
    intensity ^= true;
   
}
0;
void LED::printStatus() {
    std::cout << "Tipo: LED | ID: " << id
              << " | Intensidade: " << intensity << std::endl;
}

