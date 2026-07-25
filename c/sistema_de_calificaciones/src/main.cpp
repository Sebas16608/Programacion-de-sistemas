
#include <iostream>
#include "estadisticas.h"
// #include "alumnos.h"

int main() {
    // Declaracion de variables
    float nota[10];
    std::string alumnos[10];

    // aqui usaremos nota porque el array es del mismo tamaño que el de alumnos
    int num = sizeof(nota) / sizeof(nota[0]);

    std::cout<<"===== BIENVENIDO AL PROGRAMA ====="<<std::endl;

    for(int i = 0; i < num; i++) {
        std::cout<<"Ingrese el nombre del alumno numero "<< i+1<<std::endl;
        std::cin>>alumnos[i];
    }

    determinarPromedio(nota, num);
    return 0;
}
