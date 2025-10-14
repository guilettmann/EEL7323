#include <iostream>
#include "Motor.h"
#include "LED.h"
#include "Controller.h"
#include "maxValue.h"

int main() {
    Controller c;

    Motor m1(1), m2(2);
    LED l1(3), l2(4);

  
int main() {
    Controller c;

    Motor m1(1), m2(2);
    LED l1(3), l2(4);

    /* 
    Se quiser forçar erro do máximo número de atuadores 
    Motor m3(3);
    LED l3 (3);
    */


    c.addActuator(&m1);
    c.addActuator(&m2);
    c.addActuator(&l1);
    c.addActuator(&l2);
 
    /* 
    Se quiser forçar erro do máximo número de atuadores 
    c.addActuator(&m3);
    c.addActuator(&l3);
    */


    for (int t = 0; t < 5; t++) { //simular o loop de um uControlador
        c.activateAll();
        c.showAll();

        int motorSpeeds[2] = { m1.getSpeed(), m2.getSpeed() };
        std::cout << "Maior velocidade dos motores: " 
                  << maxValue(motorSpeeds, 2) << std::endl; //não faz sentido para o LED pois fica variando entre 0 e 1

    }

    return 0;
}

