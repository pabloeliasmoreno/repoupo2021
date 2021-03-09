#include <stdio.h>
#include <string.h>
#define NCAD 3
#define NCAR 10

void leerCadena(char cad[]);
void main(void)
{
    char tabcad[NCAD][NCAR];
    int i;
    for (i = 0; i < NCAD; i++)
    {
        printf("Cadena %d: ", i);
        leerCadena(tabcad[i]);
    }
    for (i = 0; i < NCAD; i++)
        printf("Cadena %d: %s\n", i, tabcad[i]);
}
void leerCadena(char cad[])
{
    scanf("%s", cad);
}