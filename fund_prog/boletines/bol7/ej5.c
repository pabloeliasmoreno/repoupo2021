#include <stdio.h>
#include <stdlib.h>

#define TAM 100
// Definicion de estructuras

typedef struct Fecha
{
    int dia, mes, anyo;
} Fecha;
typedef struct Persona
{
    char nombre[TAM];
    int edad;
    float altura;
    char sexo[TAM];
    Fecha nacimiento;
}Persona;

struct Persona personas;

int main()
{
    int i, familiares;
    printf("Indica el numero de familiares: ");
    scanf("%d", &familiares); //Cambiar si es huérfano

    for (i = 0; i < familiares; i++)
    {

        printf("[Familiar %d]\n", i);
        printf("[%d] Nombre: ", i);
        gets(personas[i].nombre);

        printf("[%d] Edad: ", i);
        gets(personas[i].edad);

        printf("[%d] Altura: ", i);
        scanf("%f", personas[i].altura);

        printf("[%d] Sexo: ", i);
        gets(personas[i].sexo);

        printf("Dia nacimiento:");
        scanf("%d",personas[i].nacimiento.dia);

        printf("[%d] Mes nacimiento: ", i);
        gets(personas[i].nacimiento.mes);

        printf("[%d] Anyo nacimiento: ", i);
        gets(personas[i].nacimiento.anyo);
    }

    printf("Nombre | Edad | Altura | Sexo | Nacimiento\n");
    for (i = 0; i < familiares; i++)
    {
        printf("%s | %d | %.2f | %s | %d-%d-%d",
               personas[i].nombre,
               personas[i].edad,
               personas[i].altura,
               personas[i].sexo,
               personas[i].nacimiento.dia,
               personas[i].nacimiento.mes,
               personas[i].nacimiento.anyo);
    }
}