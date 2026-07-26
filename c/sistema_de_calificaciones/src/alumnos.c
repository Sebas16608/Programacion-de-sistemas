#include <stdio.h>

void ingresarAlumnos(char alumnos[][50], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el estudiante NO. %i\n", i+1);
        fgets(alumnos[i], 50, stdin);
    }
}

void ingresarNota(float nota[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese la nota del alumno NO. %i\n", i+1);
        scanf("%f", &nota[i]);
    }
}
