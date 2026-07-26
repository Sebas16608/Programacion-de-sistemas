#include <stdio.h>

void determinarPromedio(float nota[], int cantidad) {
    float suma = 0;
    float promedio = 0;

    // Bucle para determinar la suma
    for (int i = 0; i < cantidad; i++) {
        suma += nota[i];
    }

    promedio = suma / cantidad;

    printf("El promedio es %f\n", promedio);
}

void determinarNumeroMayor(float nota[], int cantidad) {

    float mayor = 10;

    for (int i = 0; i < cantidad; i++) {
        if (nota[i] < mayor) {
            printf("%f es el numero menor\n", nota[i]);
        }
    }
}
