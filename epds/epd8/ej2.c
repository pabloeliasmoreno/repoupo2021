#include <stdio.h>
#define NLIN 60
#define NCAR 80
void leerLinea(char text[][NCAR], int numLineas);
void imprimirText(char text[][NCAR], int numLineas);
void intercambiarLineas(char text[][NCAR], int numLineas);

void main(void)
{
    char text[NLIN][NCAR];
    int numLineas;
    printf("Introduzca nº lineas \n");
    scanf("%d", &numLineas);
    fflush(stdin);

    leerLinea(text, numLineas);
    intercambiarLineas(text, numLineas);
    imprimirText(text, numLineas);
}

void leerLinea(char text[][NCAR], int numLineas)
{
    int i;
    for (i = 0; i < numLineas; i++)
    {
        printf("Introduzca la linea %d\n", i);
        gets(text[i]);
    }
}
void imprimirText(char text[][NCAR], int numLineas)
{
    int i;
    puts("---------------------------");
    for (i = 0; i < numLineas; i++)
    {
        puts(text[i]);
    }
}
void intercambiarLineas(char text[][NCAR], int numLineas)
{
    int posMenor, posMayor, i, tam;
    char aux[NCAR];

    posMayor = 0;
    posMenor = 0;
    for (i = 1; i < numLineas; i++)
    {
        if (strlen(text[i]) > strlen(text[posMayor]))
        {
            posMayor = i;
        }
        else if (strlen(text[i]) < strlen(text[posMenor]))
        {
            posMenor = i;
        }
    }

    strcpy(aux, text[posMayor]);
    strcpy(text[posMayor], text[posMenor]);
    strcpy(text[posMenor], aux);
}