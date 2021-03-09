/*
    EJERCICIO: 1.10 (PENDIENTE DE TERMINAR)
    ENUNCIADO:
        Calcular la cifra i-ésima de un número
        natural n (i y n leídos por teclado).
    VALORES E/S:
        Entrada:
            2 valores double por teclado
        Salida:
            1 valor real (double)
        E/S:
            NULL
*/
#include <stdio.h>
#include <math.h>
void main(){
    // Definicion de variables
    float i, n, resu;
    // PASO 0. Pedir los datos al usuario por teclado
    printf("Indica un numero i: ");
    scanf("%f",&i);
    printf("Indica un numero n: ");
    scanf("%f",&n);
    // PASO 1. Hacer el calculo del la cifra i-esima **PENDIENTE MODIF**
    
    // PASO 2. Devolver la cifra por pantalla
    printf("La cifra i-esima es %f",resu);
    return 0;
}