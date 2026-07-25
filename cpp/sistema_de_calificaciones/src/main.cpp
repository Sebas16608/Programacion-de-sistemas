#include <cstdio>
#include <iostream>
#include "estadisticas.h"
// #include "alumnos.h"

int main() {
    // Inicializar app CLI

    std::cout<<"===== BIENVENIDO AL PROGRAMA ====="<<std::endl;

    std::string alumnos[10];

    int cantidad = sizeof(alumnos) / sizeof(alumnos[10]);

    for(int i = 0; i < cantidad; i++) {
        std::cout<<"Ingrese el nombre del alumno numero "<< i+1<<std::endl;
        std::cin>>alumnos[i];
    }



    determinarPromedio();
    return 0;
}
