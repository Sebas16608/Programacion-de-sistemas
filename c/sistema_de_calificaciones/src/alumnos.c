#include <stdio.h>

void ingresarAlumnos(char alumnos[][50], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el estudiante NO. %i\n", i+1);
        scanf("%49s", alumnos[i]);
    }
}
