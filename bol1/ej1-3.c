#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)
float angulo, result;
int main(){
    printf("Indica el angulo a convertir en radianes -> ");
    scanf("%f",&angulo);
    result = ((angulo*M_PI)/180);
    // Con el %.4f redondeamos a cuatro cifras el resultado mostrado
    printf("El angulo %.4f equivale a %.4f radianes",angulo,result);
    return 0;
}