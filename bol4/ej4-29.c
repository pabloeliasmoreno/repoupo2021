/*
    EJERCICIO: 4.29
    ENUNCIADO:
        Algoritmo que sume todos los cuadrados
        perfectos que se encuentran en un vector de números enteros. 
*/
#include <stdio.h>

#define TAM 100

int main()
{
    int v[TAM] = {3, 4, 6, 9, 4};
    int i, j, suma = 0, exito;

    /* Paso 1. Recorrer el vector y sumar los cuadrados perfectos  */
    for (i = 0; i < 5; i++)
    {
        /* Paso 1.1. Averiguar si v[i] es cuadrado perfecto */
        exito = 0;
        j = 1;
        while (v[i] >= j * j && !exito)
        {
            if (v[i] == j * j)
                exito = 1;
            else
                j++;
        }
        if (exito)
            suma += v[i];
    }

    /* Paso 2. Mostrar la suma */
    printf("La suma es %d.\n", suma);

    return 0;
}