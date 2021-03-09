#include <stdio.h>
#include <math.h>
// Declaración de variables
int a, b, c;
float res_pos, res_neg;

int main(){
    printf("Formula: Ax2 + Bx + C\n");
    printf("Introduce tres numeros separados por un espacio -> ");
    scanf("%d %d %d",&a,&b,&c);
    // No hace bien la función
    res_pos = (-b+(sqrt((b*b))-(4*a*c))/2*a);
    res_neg = (-b - (sqrt((b*b)) - (4 * a * c)) / 2 * a);
    printf("El resultado en positivo es %.2f y el resultado en negativo es %.2f\n",res_pos,res_neg);
    return 0;
}