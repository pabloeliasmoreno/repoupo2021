/*
Escriba un programa que dado un vector de enteros y un número introducido
por teclado permita encontrar cuál es el primer elemento del vector que sea divisible
por dicho número y obtener un subvector con todos los números mayores a dicho
elemento que se encuentran a continuación en el vector, mostrando dicho
subvector por pantalla.

El elemento divisible encontrado debe formar parte del subvector.

Se puede suponer que siempre se encontrará al menos un elemento divisible en el vector.

NOTA: Si lo cree conveniente, puede crear funciones auxiliares
*/

#include <stdio.h>
#define TAM 100
int main(){
    int vec[TAM]={2,4,6,5,11,21,3,12,4,15,21};
    int sub[TAM];
    int i=0,j,num;
    int exito=0,cont=0,valor;

    printf("Introduce un numero: \n");
    scanf("%d",&num);

    printf("Buscando primer elemento divisible por %d\n",num);
    while(i<TAM && exito==0){
        if (vec[i]%num==0){
            printf("Numero divisible por %d encontrado en la posicion %d: vec[%d]=%d\n",num,i,i,vec[i]);
            exito = 1;
            valor = vec[i];
            sub[cont] = vec[i];
            for(j=i+1;j<TAM;j++){
                if (valor<= vec[j]){
                    cont++;
                    sub[cont]=vec[j];
                }
            }
        }
        i++;
    }
    printf("Subvector de mayores: ");
    for(i=0;i<=cont;i++){
        if(i<cont)
            printf("%2d,", sub[i]);
        else
            printf("%2d", sub[i]);
    }
    return 0;
}