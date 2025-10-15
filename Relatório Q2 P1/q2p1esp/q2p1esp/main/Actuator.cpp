#include "Actuator.h"

Actuator::Actuator(int i) {
    id = i;
}

void Actuator::printStatus() {
	ESP_LOGI("ATUADOR", "ID: %d", id);
}
