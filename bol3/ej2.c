#include <stdio.h>
int main()
{
    int a = 0, b = 0, i = 0, suma = 0;
    printf("Introduce dos numeros naturales separados por un espacio: ");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        suma = (i * i) + suma;
    }
    printf("\nLa suma de todos los cuadrados comprendidos entre %d y %d es %d\n", a, b, suma);
    return 0;
}