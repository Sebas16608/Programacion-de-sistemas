#include <cstdio>
#include <iostream>

int suma() {
    int nota[4];

    int suma = 0;

    int promedio = 0;

    int num = sizeof(nota) / sizeof(nota[0]);

    for(int i = 0; i < num; i++) {
        std::cout << "Ingrese la nota " << i + 1 << std::endl;
        std::cin >> nota[i];
    }

    for(int i = 0; i < num; i++) {
        suma += nota[i];
    }

    std::cout<< suma <<" "<<std::endl;

    return 1;
}

int main() {
    suma();
    return 0;
}
