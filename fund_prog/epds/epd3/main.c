#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    int i;
    int suma = 0;
    printf("Introduzca un numero -> ");
    scanf("%d",&num);
    for (i = 1; i < num; i++)
    {
        if (num%i==0){
            suma = suma + i;
        }
    }
    if (suma == num){
        printf("Es un numero perfecto");
    } else {
        printf("No es un numero perfecto");
    }
    
}