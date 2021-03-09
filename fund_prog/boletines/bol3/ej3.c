#include <stdio.h>

int main(){
    // Declaración de variables
    float suma, gasto, presupuesto;
    // Paso 1. Solicitar presupuesto
    printf("Indica un presupuesto maximo (coloca los decimales con punto) -> ");
    scanf("%f", &presupuesto);

    // Paso 2. Solicitar gastos hasta que la suma supere el presupuesto
    suma = 0;
    while (suma < presupuesto){
        printf("Indica un gasto (coloca los decimales con punto) -> ");
        scanf("%f", &gasto);
        suma += gasto;
    }

    // Paso 3. Mostrar la suma total de gastos
    printf("El gasto total es de: %.2f\n", suma);
}