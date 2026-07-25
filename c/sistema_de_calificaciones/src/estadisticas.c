#include <stdio.h>

float determinarPromedio(float nota[], int num) {
    float suma = 0;
    float promedio = 0;

    for (int i = 0; i < num; i++){
        suma += nota[i];        
    }
    promedio = suma / num;

    printf("el promedio es %f\n", promedio);

    return promedio;
}
