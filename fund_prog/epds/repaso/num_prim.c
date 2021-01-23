#include <stdio.h>
#define TAM 1000

int factoresprimos(int n, int factores[]);
int primerdivisorprimo (int n);
int es_primo(int n);

int main (void){
    int n=0,num_f=0,i=0,factores[TAM];
    printf("\nIntroduzca un numero (maximo %d): ",TAM);
    scanf("%d",&n);
    num_f = factoresprimos(n,factores);
    printf("\nFactores primos [%d]: ",num_f);
    for (i = 0; i < num_f; i++)
    {
        printf("%2d",factores[i]);
    }
    printf("\n\n");
    return 0;
}

int factoresprimos (int n, int factores[])
{
    int cont,primo=0,factor;
    cont=0;
    factor=n;
    while(factor>1)
    {
        primo = primerdivisorprimo(factor);
        factores[cont] = primo;
        factor = factor/primo;
        cont++;
    }
    return cont;
}

int primerdivisorprimo(int n)
{
    int i,enc,res=0;

    enc = 0;
    i=2;
    while(i<=n && !enc)
    {
        printf("Probamos el divisor i=%d\n",i);
        if (es_primo(i)){
            if (n%i==0){
                res = i;
                enc = 1;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
    return res;
}

int es_primo(int n)
{
    int enc, i;

    enc = 0;
    i = 2;
    while (i < n && !enc)
    {
        if (n % i == 0)
            enc = 1;
        else
            i++;
    }
    if (enc)
        return 0;
    else
        return 1;
}