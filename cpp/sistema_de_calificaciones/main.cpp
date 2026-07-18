#include <cstdio>
#include <iostream>
#include <string>

int main() {
    std::string name;
    int nota[4];

    std::cout << "ingrese su nombre" << std::endl;
    std::cin >> name;
    for(int i = 0; i < 4; i++) {
        std::cout << "Ingrese la nota " << i + 1 << std::endl;
        std::cin >> nota[i];
    }

    for(int j = 0; j < 4; j++) {
        int suma = nota[j] + nota[j];
    }

    return 0;
}
