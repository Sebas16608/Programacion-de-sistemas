#include <stdio.h>
#include "estadisticas.h"
#include "alumnos.h"

int main(){
    // Declaracion de Variables
    float nota[10];
    char alumnos[10][50];

    // aca usare nota porque el array es del mismo tamaño que el de alumonos
    // ademas que en alumons tenemos una matriz por lo mismo del char
    int cantidad = sizeof(nota) / sizeof(nota[0]);

    // Inicializacion de la app
    printf("==== BIENVENIDO AL PROGRAMA ====\n");


    // llamada a las funciones, para ingresar alumos y para el iincio de las estadisticas
    ingresarAlumnos(alumnos, cantidad);
    determinarPromedio(nota, cantidad);

    return 0;

}
