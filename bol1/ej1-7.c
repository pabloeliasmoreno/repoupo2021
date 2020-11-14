#include <stdio.h>
float a, b, c, res;
int main(){
    printf("Introduce tres numeros reales y te digo su media aritmetica -> ");
    scanf("%f %f %f",&a,&b,&c);
    res = ((a+b+c)/3);
    printf("La media aritmetica es %.2f\n",res);
    return 0;
}