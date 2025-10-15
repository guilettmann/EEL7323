#include "LED.h"
#include <iostream>

LED::LED(int i) : Actuator(i) {
    intensity = false;
}

void LED::activate() {
    // alterna entre 0 e 1
    intensity ^= true;
   
}
void LED::printStatus() {
    ESP_LOGI("LED", "Tipo: LED | ID: %d | Intensidade: %d", id, intensity);// troquei a lógica para esp
}

