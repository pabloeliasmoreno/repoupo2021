#include <stdio.h>
#define NFIL 10
#define NCOL 10

int posFilaFibonacci(int m[NFIL][NCOL], int nfil, int ncol);
int esFibonacci(int n);

int main(){
    int m[NFIL][NCOL] = {{4, 8, 22}, {21, 2, 5}, {34, 13, 9}};
    int s=0;
    s=posFilaFibonacci(m, 3, 3);
    printf("La posicion de la columna con dos numeros de Fibonacci es %d", s);
    return 0;
}

int posFilaFibonacci(int m[NFIL][NCOL], int nfil, int ncol){
    int exito=0,cont=0,i=0,j=0;
    while(i < nfil && !exito){
        j=0;
        cont=0;
        while (j < ncol && !exito){
            if(esFibonacci(m[i][j])){
                cont++;
                if (cont == 2)
                    exito = 1;
            }
            j++;
        }
        if(!exito)
            i++;
    }
    if (!exito)
        i=-1;
    return i;
}

int esFibonacci(int n){
    int a=0,b=1,c=0,exito=0;
    if(n == 0)
        exito = 1;
    while(c<n && !exito){
        c=a+b;
        if(c==n)
            exito=1;
        else{
            a=b;
            b=c;
        }
    }
    return exito;
}