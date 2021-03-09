#include <stdio.h>
#include <math.h>
float kilo, metros, imc;
int main(){
    printf("Indica tu peso en Kg -> ");
    scanf("%f",&kilo);
    printf("Indica tu estatura en metros -> ");
    scanf("%f", &metros);
    imc = (kilo/(metros*metros));
    printf("\nSu IMC es de %.2f",imc);
    return 0;
}