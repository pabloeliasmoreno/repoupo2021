#include <stdio.h>
#include <stdlib.h>

#define NFIL 50
#define NCOL 50

void imprimeMatriz(int mat[][NCOL], int nfil, int ncol);
int siguientePrimo(int primo);
int esPrimo(int n);
void main()
{
    int nfil, ncol, i, j, primo;
    int mat[NFIL][NCOL];

    //Pedir las bases al usuario
    printf("Introduzca numero de filas: \n");
    scanf("%d", &nfil);
    printf("Introduzca  numero de columnas:  \n");
    scanf("%d", &ncol);
    primo = 1;
    //Rellenamos la matriz
    for (i = 0; i < nfil; i++)
    {
        for (j = 0; j < ncol; j++)
        {
            primo = siguientePrimo(primo);
            mat[i][j] = primo;
        }
    }

    imprimeMatriz(mat, nfil, ncol);
}

void imprimeMatriz(int mat[][NCOL], int nfil, int ncol)
{
    int i, j;
    for (i = 0; i < nfil; i++)
    {
        for (j = 0; j < ncol; j++)
        {
            printf("%2d,", mat[i][j]);
        }
        printf("\n");
    }
}

int siguientePrimo(int primo)
{
    int sigP = primo + 1;
    while (!esPrimo(sigP))
    {
        sigP++;
    }
    return sigP;
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