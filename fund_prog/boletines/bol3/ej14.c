#include <stdio.h>
/*
    EJERCICIO: 3.14
    ENUNCIADO:
        Escribir un programa que muestre las tablas de multiplicar de
        los números del 1 al 10.
*/
int main(){
    int i, j, k;
        for (i = 1; i <= 10; i++){
            printf("\nTABLA DEL %d\n", i);
            j = 0;
            for (j = 1; j <= 10; j++){
                k = i * j;
                printf("%d x %d = %d\n",i,j,k);
            }
        }
}