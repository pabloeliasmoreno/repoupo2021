#include <stdio.h>
#define TAM 100
int main(){
    // Definir variables
    float v[TAM];
    float x = 1, suma;
    int i, n = 0;

    // Paso 1. Leer vector
    while (x != 0)
    {
        printf("Numero: ");
        scanf("%f", &x);
        if (x != 0){
            v[n] = x;
            n++;
        }
    }
    // Paso 2. Media aritmetica
    suma = 0;
    for (i=0; i < n; i++){
        suma += v[i];
    }
    suma = suma/n;
    
    // Paso 3. Mostrar la media
    printf("Media: %.2f", suma);

    return 0;
}