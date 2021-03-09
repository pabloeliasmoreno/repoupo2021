#include <stdio.h>
#include <stdlib.h>
//(m n) = n! * m!/(m-n)!
int fac(int m);

void main()
{
    int m, n;
    int resultado;

    printf("Introduzca el numero m\n");
    scanf("%d", &m);
    printf("Introduzca el numero n\n");
    scanf("%d", &n);

    resultado = fac(m) * fac(n) / fac(m - n);
}

int fac(int x)
{
    int facX = 1;
    int i = 1;
    while (i < x)
    {
        facX = facX * i;
        i++;
    }
    return facX;
}