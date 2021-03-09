#include <stdio.h>
#define TCOL 4
#define TFIL 4
float calculoSumMatriz(float v[TFIL][TCOL], int fila);

int main()
{
    int f, suma;
    float v[TFIL][TCOL] =
    {{0,1,2,3},
    {4,5,6,7},
    {8,9,10,11},
    {12,13,14,15}
    };
    printf("Introduce un numero de fila del 0 al 3: ");
    scanf("%d",&f);
    suma = calculoSumMatriz(v, f);
    printf("El resultado de la suma es %d",suma);
}

float calculoSumMatriz(float v[TFIL][TCOL], int fila)
{
    int i = 0, suma = 0;
    for (i = 0; i<=3; i++)
    {
        suma = suma + v[fila][i];
    }
    return suma;
}