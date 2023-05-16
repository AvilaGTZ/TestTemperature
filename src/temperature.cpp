#include "temperature.h"

Temperature::Temperature() : m_temperature(0) {}

Temperature::~Temperature() {}

void Temperature::setTemperature(int32_t temperature) {
    m_temperature = temperature;
}

int32_t Temperature::getTemperature() {
    std::cout << "The temperature is: " << m_temperature << std::endl;
    return m_temperature;
}

void Temperature::printData(int data) {
    std::cout << "The temperature is: " << data << std::endl;
}