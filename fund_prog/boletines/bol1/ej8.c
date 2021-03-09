/*
    EJERCICIO: 1.8
    ENUNCIADO:
        Calcular la desviación típica de tres números reales
        leídos por teclado.
    VALORES E/S:
        Entrada:
            3 valores reales (float) por teclado
        Salida:
            1 valor real (float)
        E/S:
            NULL
*/
#include <stdio.h>
#include <math.h>
void main(){
    // Definición de variables
    double num1, num2, num3, media;
    double dist1, dist2, dist3, distmedia, divi, resu;
    // PASO 0. Pedimos al usuario los numeros
    printf("Introduce tres numeros reales con un espacio de por medio: ");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    // PASO 1. Calcular la media
    media = ((num1+num2+num3)/3);
    // PASO 2. Calcular el cuadrado de la distancia a la media para cada dato
    dist1 = pow((media-num1),2);
    dist2 = pow((media-num2),2);
    dist3 = pow((media-num3),2);
    // PASO 3. Sumar los valores que resultaron del paso 2
    distmedia = (dist1 + dist2 + dist3);
    // PASO 4. Dividir entre el numero de datos
    divi = (distmedia / 3);
    // PASO 5. Sacar la raiz cuadrada
    resu = sqrt(divi);
    // PASO 6. Devolvemos los datos por pantalla
    printf("La desviacion tipica es de %lf", resu);
    return 0;
}