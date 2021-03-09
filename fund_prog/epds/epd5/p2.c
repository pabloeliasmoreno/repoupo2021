#include <stdio.h>
#define TAM 6
int maximo(int array[TAM]);
int minimo(int array[TAM]);
int main(void)
{
    int array[TAM] = {2, 4, 7, 25, -12, 0};
    int min, max;

    max = maximo(array);
    min = minimo(array);

    printf("El valor maximo %d, y el minimo es %d\n", max, min);
}
int maximo(int array[TAM])
{
    int i;
    int max = array[0];
    for (i = 0; i < TAM; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
int minimo(int array[TAM])
{
    int i;
    int min = array[0];
    for (i = 0; i < TAM; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}