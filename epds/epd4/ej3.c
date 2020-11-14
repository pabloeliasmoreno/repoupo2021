#include <stdio.h>

#define N 2

int main(void)
{

    int i, j, exito = 0;
    int matriz[N][N];

    matriz[0][0] = 1;
    matriz[0][1] = 1;
    matriz[1][0] = 1;
    matriz[1][1] = 1;

    i = 0;
    while (i < N && !exito)
    {
        j = 0;
        while (j < N && !exito)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                exito = 1;
            }
            j++;
        }
        i++;
    }

    if (exito == 1)
        printf("\nLa matriz no es simetrica\n\n");
    else
        printf("\nLa matriz si es simetrica\n\n");

    return 0;
}