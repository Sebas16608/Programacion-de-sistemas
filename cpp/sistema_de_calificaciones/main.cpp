#include <cstdio>
#include <iostream>
#include "estadisticas.h"

int main() {
    // Inicializar app CLI
    std::cout<<"==== BIENVENIDO AL PROGRAMA ====="<<std::endl;
    int cantidad;
    std::cout<<"Por favor ingrese el numero de notas a registrar "<< std::endl;
    std::cin >> cantidad;
    determinarPromedio(cantidad);
    return 0;
}
