#include <stdio.h>
int bubbleSort(int size, int *array);
int main(void)
{
    int size, i, array[20];
    printf("Introduce el numero total de elementos: ");
    scanf("%d",&size);

    printf("Introduce los %d elementos: ", size);
    for (i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    // Llamada a la función
    bubbleSort(size, array);
    printf("Despues de ordenar: ");
    for(i=0;i<size;i++)
    {
        printf(" %d",array[i]);
    }
    return 0;
}

int bubbleSort(int size, int *array)
{
    int i, j, temp;
    // Bubble sorting algorth
    for (i=size-2; i>=0; i--)
    {
        for (j=0; j<=i; j++)
        {
            // Swapping
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return 1;
}