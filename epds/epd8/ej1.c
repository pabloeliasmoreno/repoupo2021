#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXCHAR 100

void main(void)
{
    char cad[MAXCHAR];
    int cont = 1, i;
    printf("Introduzca una frase:\n");
    gets(cad);
    for(i = 0; i<strlen(cad); i++)
    {
        if(cad[i]==' ')
            cont++;
    }
    printf("Hay %d palabras", cont);
}

// Con funciones
#define DIM 100

int cuentaPalabras(char cad[]);
void main(void)
{
    char cad[DIM];
    int cont = 1, i;
    printf("Introduzca una frase:\n");
    gets(cad);
    cont = cuentaPalabras(cad);
    printf("Hay %d palabras\n", cont);
}
int cuentaPalabras(char cad[])
{
    int i, cont = 1;
    for (i = 0; i < strlen(cad); i++)
    {
        if (cad[i] == ' ')
            cont++;
    }
    return cont;
}