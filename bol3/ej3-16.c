#include <stdio.h>
int main (){
    // Definición de variables
    int a, b, i, d, exito;
    // Paso 1. Leer por teclado dos variables
    printf("Introduce dos numeros separados por un espacio -> ");
    scanf("%d %d",&a,&b);
    // Paso 2. Mostrar primos entre a y b (búsqueda en el recorrido)
    // 2.1. Recorrido
    for (i = a; i <= b; i++){
        // 2.2. Busqueda
        exito = 0;
        d = 2;
        while (d < i && !exito){
            if (i % d == 0){
                exito = 1;
            } else {
                d++;
            }
        }
        if (exito == 0){
            printf("%d, ", i);
        }

    }
    printf("\n");
    return 0;
}