#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float numerador;
    float denominador;
} Racional;

Racional sumaRacional(Racional a, Racional b);
Racional restaRacional(Racional a, Racional b);

void main(void){
    Racional a, b, res;
    float suma;
    float resta;
    printf("Introduce el numerador: ");
    scanf("%f", &a.numerador);
    printf("Introduce el denominador: ");
    scanf("%f", &a.denominador);

    printf("Introduce el numerador: ");
    scanf("%f", &b.numerador);
    printf("Introduce el denominador: ");
    scanf("%f", &b.denominador);

    res = sumaRacional(a, b);
    printf("El resultado de la suma es %f/%f\n",res.numerador, res.denominador);
    res = restaRacional(a, b);
    printf("El resultado de la resta es %f/%f\n", res.numerador, res.denominador);
}

Racional sumaRacional(Racional a, Racional b){
    Racional r;
    if (a.denominador == b.denominador){
        r.numerador = a.numerador + b.numerador;
        r.denominador = a.denominador;
    } else {
        r.numerador = a.numerador + b.numerador;
        r.denominador = a.denominador;
    }
    return r;
}

Racional restaRacional(Racional a, Racional b){
    Racional r;
    r.numerador = a.numerador - b.numerador;
    r.denominador = a.denominador;
    return r;
}