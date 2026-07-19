#include <cstdio>
#include <iostream>


float determinarPromedio(int x) {
    float nota[x];
    int num = sizeof(nota) / sizeof(nota[0]);

    float suma = 0;
    float promedio = 0;

    for(int i = 0; i < num; i++) {
        std::cout << "Ingrese la nota " << i + 1 << std::endl;
        std::cin >> nota[i];
    }

    for(int i = 0; i < num; i++) {
        suma += nota[i];
    }
    promedio = suma / num;

    std::cout<<"El promedio es "<< promedio << std::endl;

    return 0;
}
