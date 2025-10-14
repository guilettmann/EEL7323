#ifndef LED_H
#define LED_H

#include "Actuator.h"

class LED : public Actuator {
private:
    bool intensity;  // 0 = desligado (false), 1 = ligado (true)

public:
    LED(int i);
    void activate() override;
    void printStatus() override;
};

#endif

