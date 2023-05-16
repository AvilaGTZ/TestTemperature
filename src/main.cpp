#include <iostream>
#include <cstdlib>
#include <temperature.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <temperature>" << std::endl;
        return 1;
    }

    int temperature = std::atoi(argv[1]);

    Temperature temp;
    temp.printData(temperature);

    return 0;
}