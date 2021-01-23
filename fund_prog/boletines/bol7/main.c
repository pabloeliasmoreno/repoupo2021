#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct Fecha{
    int dia;
    int mes;
    int anyo;
}Fecha;

typedef struct Persona{
    char nombre[TAM];
    int edad;
    float altura;
    char sexo[TAM];
    Fecha nacimiento;
}Persona;

struct Persona personas[TAM];

int main(){
    int i, familiares;
    printf("Indica el numero de familiares: ");
    scanf("%d", &familiares);

    for (i=0; i<familiares;i++){
        printf("[Familiar %d]\n", i);
        printf("[%d] Nombre: ", i);
        fflush(stdin);
        gets(personas[i].nombre);

        /*
        printf("[%d] Edad: ", i);
        scanf("%d",personas[i].edad);
        

        printf("[%d] Altura: ", i);
        scanf("%f", personas[i].altura);

    */
        printf("[%d] Sexo: ", i);
        gets(personas[i].sexo);

        printf("[%d] Dia nacimiento:");
        scanf("%d", personas[i].nacimiento.dia);

        printf("[%d] Mes nacimiento: ", i);
        scanf("%d", personas[i].nacimiento.mes);

        printf("[%d] Anyo nacimiento: ", i);
        scanf("%d", personas[i].nacimiento.anyo);
    }
}