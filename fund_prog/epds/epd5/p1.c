#include <stdio.h>
#include <stdlib.h>
#define TAM 6
int subvectores();
int main()
{
    int v[TAM] = {4,1,5,2,1,13};
    int coincidentes;
    coincidentes = subvectores(v);
    printf("Se han encontrado %d coincidencias",coincidentes);
    return 0;
}
int subvectores(int v[])
{
    int i,j,k,l;
    int suma=0;
    int enc=0;
    for(i=0;i<TAM;i++)
    {
        j=0;
        for ( j = j+i+1; j < TAM; j++)
        {
            for (k = i; k <= j; k++)
            {
                suma = suma + v[k];
                if (k==j){
                    for (l = 0; l < TAM; l++)
                    {
                        if (v[1] == suma){
                            enc++;
                        }
                    }
                    suma = 0;
                }
            }
            
        }
        
    }
    return enc;
}