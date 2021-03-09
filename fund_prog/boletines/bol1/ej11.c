/*
    EJERCICIO: 1.11
    ENUNCIADO:
        Mostrar por pantalla un número entero aleatorio
        comprendido entre a y b (leídos por teclado).
    VALORES E/S:
        Entrada:
            2 valores int por teclado
        Salida:
            1 valor int
        E/S:
            NULL
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    // Definicion de variables
    int num1, num2, aleatorio;
    // PASO 0. Pedir datos al usuario por pantalla
    printf("Introduce dos numeros enteros, el primero mayor que el segundo: ");
    scanf("%d %d",&num1,&num2);
    // PASO 1. Generar semilla aleatoria
    srand(time(NULL));
    // PASO 2. Generar numero aleatorio entre num1 y num2
    aleatorio = rand() % (num1-num2+1) + num2;
    // PASO 3. Mostrar numero generado
    printf("\nEl numero aleatorio resultante es %d",aleatorio);
    return 0;
}