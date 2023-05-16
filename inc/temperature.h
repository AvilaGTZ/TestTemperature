#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>

class Temperature {
private:
    int32_t m_temperature;

public:
    Temperature();
    ~Temperature();

    void setTemperature(int32_t temperature);
    int32_t getTemperature();

    void printData(int data);
};

#endif