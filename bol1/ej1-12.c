/*
    EJERCICIO: 1.11
    PENDIENTE DE FINALIZAR
    ENUNCIADO:
        Mostrar por pantalla un número real aleatorio
        comprendido entre a y b (leídos por teclado).
    VALORES E/S:
        Entrada:
            2 valores float por teclado
        Salida:
            1 valor float
        E/S:
            NULL
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
    // Definicion de variables
    float num1, num2;
    float aleatorio;
    // PASO 0. Pedir datos al usuario por pantalla
    printf("Introduce dos numeros reañes, con un decimal, el primero mayor que el segundo: ");
    scanf("%d %d", &num1, &num2);
    // PASO 1. Generar semilla aleatoria
    srand(time(NULL));
    // PASO 2. Redondear los numeros obtenidos por el usuario para quitar los decimales
    num1 = num1 * 10;
    num2 = num2 * 10;
    // PASO 2. Generar numero aleatorio entre num1 y num2
    aleatorio = rand() % (num1 - num2 + 1) + num2;
    // PASO 3. Mostrar numero generado
    printf("\nEl numero aleatorio resultante es %f", aleatorio);
    return 0;
}