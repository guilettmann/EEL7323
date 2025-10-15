#include <stdio.h>
#include "Motor.h"
#include "LED.h"
#include "Controller.h"
#include "maxValue.h"

extern "C" void app_main(void) { // declarei sem querer a main duas vezes na prova, aqui eu corrigi

    Controller c;

    Motor m1(1), m2(2);
    LED l1(3), l2(4);

    static const char *TAG = "MAX"; //adicionado para esp log

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
    while(1){
         c.activateAll();
         c.showAll();

         int motorSpeeds[2] = { m1.getSpeed(), m2.getSpeed() };

         ESP_LOGI(TAG, "maxValue: %d", maxValue(motorSpeeds, 2)); // mudei para printar no serial

    }
}