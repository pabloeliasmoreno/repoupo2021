/*
    EJERCICIO: 5.4
    ENUNCIADO:
         Escribir una función que calcule el máximo de un
         vector de números reales. Implementar una función
         main para probar el funcionamiento con datos
         leídos desde teclado
    TIPOS DE DATOS:
        Entrada:
            1 vector de float -> float v[TAM]
            int tam
        Salida:
            float
        E/S:
            Ninguno
*/
#include <stdio.h>
#define TAM 100
float maximo (float v[TAM], int tam);

int main(){
    float vector[TAM] = {4, 9, 13, 20};
    float max;
    max = maximo(vector, 3);
    printf("Maximo: %f\n", max);
    return 0;
}

float maximo (float v[TAM], int tam){
    float max;
    int i;

    max = v[0];
    for (i = 0; i < tam; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}