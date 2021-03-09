#include <stdio.h>
#include <string.h>
#define TAM 100

void guardarMatrices(char nombreFichero[TAM]);

int main()
{
    guardarMatrices("matrices.txt");
    return 0;
}

void guardarMatrices(char nombreFichero[TAM])
{
    FILE *f;
    int i, j, k, numMatrices, nfil, ncol;
    float x;

    f = fopen(nombreFichero, "w");
    if (f == NULL)
        printf("Hay un error al abrir el fichero.");
    else
    {
        printf("Cuantas matrices: ");
        scanf("%d",&numMatrices);
        fprintf(f, "%d\n",numMatrices);
        for(i=0; i < numMatrices; i++)
        {
            printf("Numero de filas: ");
            scanf("%d",&nfil);
            printf("Numero de columnas:");
            scanf("%d",&ncol);
            fprintf(f, "%d %d\n", nfil, ncol);
            for (j = 0; j < nfil; j++){
                for (k = 0; k < ncol; k++){
                    printf("Elemento (%d,%d): ", j, k);
                    scanf("%f", &x);
                    if (k == ncol - 1 )
                        fprintf(f, "%.1f\n", x);
                    else
                        fprintf(f, "%.1f ", x);
                }
                
            }
            
        }

        fclose(f);
    }
    
}