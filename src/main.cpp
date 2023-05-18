#include <iostream>
#include <cstdlib>
#include <temperature.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Por favor, proporciona un argumento entero." << std::endl;
        return 1;  // retornamos un código de error
    }
    
    Temperature::getInstance().setTemperature(25);

    std::cout << "Temperature is: " << Temperature::getInstance().getTemperature() << std::endl;

    int data = std::atoi(argv[1]);  // convertimos el argumento a un entero
    Temperature::getInstance().printData(data);


    return 0;
}
