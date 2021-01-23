#include <stdio.h>
#define NEMPLEADOS 3
typedef struct
{
    char nombre[14];
    char apellidos[30];
    float sueldo;
} Empleado;
void main(void)
{
    Empleado emps[NEMPLEADOS];
    int i;
    printf("Introduzca datos:\n\n");
    for (i = 0; i < NEMPLEADOS; i++)
    {
        printf("Empleado %d:\n\tNombre: ", i);
        gets(emps[i].nombre);
        printf("\tApellidos: ");
        gets(emps[i].apellidos);
        printf("\tSueldo: ");
        scanf("%f", &emps[i].sueldo);
        fflush(stdin); // Limpiar buffer entrada
    }
    printf("Los datos introducidos son:\n\n");
    for (i = 0; i < NEMPLEADOS; i++)
    {
        printf("Empleado %d:\n", i);
        printf("\tNombre: %s\n", emps[i].nombre);
        printf("\tApellidos: %s\n", emps[i].apellidos);
        printf("\tSueldo: %f\n\n", emps[i].sueldo);
    }