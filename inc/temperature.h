#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>

class Temperature {
private:
    int32_t m_temperature;
    static Temperature* instance;

    // constructor privado
    Temperature(int32_t temp = 0) : m_temperature(temp) {}

public:
    // destructor publico
    ~Temperature() {
        if (instance)
            delete instance;
    }

    // función para obtener la única instancia de la clase
    static Temperature& getInstance() {
        if (instance == nullptr)
            instance = new Temperature();

        return *instance;
    }

    void setTemperature(int32_t temperature);
    int32_t getTemperature();

    void printData(int data);
};

#endif

