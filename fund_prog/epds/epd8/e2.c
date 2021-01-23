#include <stdio.h>
#include <string.h>
#define MAX 80
void main(void)
{
    char cad1[MAX];
    char cad2[MAX];
    printf("Introduzca el nombre completo de esta asignatura\n");
    scanf("%s", cad1);
    printf("Leemos con la function scanf: %s", cad1);
    printf("\nIntroduzca de nuevo el nombre completo de esta asignatura\n");
    gets(cad2);
    printf("Leemos con la function gets: %s", cad2);
}
