#include <stdio.h>
#include <stdlib.h>

int esPrimo(int n);
void main()
{
    int i, j, cont;
    cont = 0;
    int n = 2;
    while (cont < 50)
    {
        if (esPrimo(n) == 1)
        {
            printf("%d,", n);
            cont++;
        }
        n++;
    }
}
int esPrimo(int n)
{
    int i = 2, exito;
    exito = 1;
    while (i < n && exito == 1)
    {
        if (n % i == 0)
        {
            exito = 0;
        }
        i++;
    }
    return exito;
}