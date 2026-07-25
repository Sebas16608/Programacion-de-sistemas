#include <iostream>

int alumnos() {
    string alumnos[10];

    for(int i = 0; i < 10; i++) {
        std::cout<<"Ingrese el nombre del estudiante "<<i+1<<std::endl;
    }
    return 0;
}
