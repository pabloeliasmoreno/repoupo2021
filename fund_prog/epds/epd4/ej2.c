#include <stdio.h>
#define TAM 6

void main()
{

    int boleto[TAM];
    int ganador[TAM];
    int i, numAciertos = 0;
    //Introducir el boleto ganador
    for (i = 0; i < TAM; i++)
    {
        printf("Introduzca el elemento %d del boleto ganador\n", i);
        scanf("%d", &ganador[i]);
    }

    //Introducir el boleto
    for (i = 0; i < TAM; i++)
    {
        printf("Introduzca el elemento %d del boleto\n", i);
        scanf("%d", &boleto[i]);
    }

    //Comprobar num de aciertos
    for (i = 0; i < TAM; i++)
    {
        if (boleto[i] == ganador[i])
            numAciertos++;
    }
    printf("El numero de aciertos totales es %d", numAciertos);
}