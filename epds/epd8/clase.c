#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXCAR 255

void main()
{
    int tamano, res;
    char cad[MAXCAR] = {'H','o','l','a','\0'};
    char cad2[MAXCAR] = " Clase";
    char cad3[MAXCAR] = "Hola";

    tamano = strlen(cad); // Devuelve la longitud: 5
    strcpy(cad2, cad); // Copia una cadena en otra
    strcat(cad, cad2); // Concatena lo segundo a lo primero: "Hola clase Clase"
    res = strcmp(cad, cad2); // Compara las cadenas
        /*
        *   0 si son iguales
        *   strcmp > 0 cad1 es posterior a cad2
        *   strcmp < 0 cad1 es anterior a cad2
        */
}