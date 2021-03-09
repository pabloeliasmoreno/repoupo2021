#include <stdio.h>
#include <math.h>
int base, exponente;
double result;
int main (){
    printf("Indica una base y un exponente separados por un espacio -> ");
    scanf("%d %d",&base,&exponente);
    result = pow(base, exponente);
    printf("La potencia es igual a %.1f",result);
    return 0;
}