#include <stdio.h>
int main(){
    int num;
    printf("Introduce un numero entre 1 y 100 -> ");
    scanf("%d",&num);
    if (num >= 1 && num <= 100){
        printf("El numero es correcto (entre 1 y 100)\n");
        if (num%2==0){
            printf("El numero %d es par.\n",num);
        }else{
            printf("El numero %d es impar.\n",num);
        }
        if (num%3==0){
            printf("El numero %d es multipo de 3.\n",num);
        }
        if (num%5==0){
            printf("El numero %d es multiplo de 5.\n",num);
        }
        if (num%7==0){
            printf("El numero %d es multiplo de 7.\n",num);
        }
    }else{
        printf("El numero es incorrecto (menor que 1 o mayor que 100)");
    }
}