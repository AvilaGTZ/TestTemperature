#include "temperature.h"

Temperature* Temperature::instance = nullptr;

void Temperature::setTemperature(int32_t temperature) {
    m_temperature = temperature;
}

int32_t Temperature::getTemperature() {
    return m_temperature;
}

void Temperature::printData(int data) {
    std::cout << "Data: " << data << std::endl;
}

