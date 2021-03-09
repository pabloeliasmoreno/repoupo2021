#include <stdio.h>

void main()
{
    int tiempo[5];
    int i;

    for(i=0;i<5;i++){
        printf("Introduzca el tiempo del ciclista %d\n", i+1);
        scanf("%d",&tiempo[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Diferencia del ciclista %d con el primero es %d\n", (i + 1), tiempo[i]-tiempo[0]);
    }
}