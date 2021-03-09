/*  Manuel Jesus Flores Montaño - EJERCICIO 8.8 */
#include <stdio.h>
#define TAM 100
#define NFIL 100
#define NCOL 100
typedef struct
{
    int nfil, ncol;
    float matriz[NFIL][NCOL];
} Matriz;

int calculoMatrices(char nombreFichero[TAM], Matriz matrices[TAM], float *media, float *desv);
int main()
{
    Matriz matrices[TAM];
    float media, desv;
    int res;
    res = calculoMatrices("matrices.txt", matrices, &media, &desv);
    /* Falta por implementar el codigo... */
    return 0;
}

int calculoMatrices(char nombreFichero[TAM], Matriz matrices[TAM], float *media, float *desv)
{
    /* Falta por implementar el codigo... */
    int i, j, k, res, numMatrices, nfil, ncol;
    FILE *f;
    f = fopen(nombreFichero, "r");
    if (f == NULL)
        printf("No se ha abierto correctamente.");
    else
    {
        fscanf(f, "%d", &numMatrices);
        for (i = 0; i < numMatrices; i++)
        {
            fscanf(f, "%d%d", &nfil, &ncol);
            matrices[i].nfil = nfil;
            matrices[i].ncol = ncol;
            for (j = 0; j < nfil; j++)
            {
                for (k = 0; k < ncol; k++)
                {
                    fscanf(f, "%f", &matrices[i].matriz[j][k]);
                }
            }
        }
        fclose(f);
    }
    return res;
}
