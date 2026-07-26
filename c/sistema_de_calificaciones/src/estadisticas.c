#include <stdio.h>

void determinarPromedio(float nota[], int cantidad) {
    float suma = 0;
    float promedio = 0;

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese la nota del alumno NO. %i\n", i+1);
        scanf("%f", &nota[i]);
    }

}
