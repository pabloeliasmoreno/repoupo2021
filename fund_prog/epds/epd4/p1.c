#include <stdio.h>
#define TAM 4
int main()
{
    int i = 0;
    int res = 0;
    int v[TAM];
    while (i < TAM)
    {
        printf("Indica el elemento %d del array: ", i);
        scanf("%d", v+i);
        i++;
    }
    // Imprime según el orden que le he dado
    for(i = 0; i < TAM; i++)
    {
        printf("%d ",v[i]);
    }
    // Imprime en el orden contrario al que se le han dado los elementos
    for(i = TAM-1; i>=0; i--)
    {
        printf("%d ", v[i]);
    }
    
}