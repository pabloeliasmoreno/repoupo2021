#include <stdio.h>

#define TAM 100

typedef struct
{
    int dia, mes, anyo;
} Fecha;

typedef struct
{
    int edad;
    float altura, peso;
    char nombre [TAM];
    char sexo;
    Fecha nacimiento;
} Persona;

int main()
{
    Persona p
    // 1. Leer la persona desde teclado
    printf("Edad: ");
    scanf("%d", &p.edad);
    printf("Altura: ");
    scanf("%f", &p.altura);
    printf("Peso: ");
    scanf("%f", &p.peso);
    printf("Nombre: ");
    scanf("%s", p.nombre);
    printf("Sexo: ");
    fflush(stdin); // Vaciar buffer teclado
    scanf("%c", &p.sexo);
    printf("Dia de nacimiento: ");
    scanf("%d", &p.nacimiento.dia);
    printf("Mes de nacimiento: ");
    scanf("%d", &p.nacimiento.mes);
    printf("Anyo de nacimiento: ");
    scanf("%d", &p.nacimiento.anyo);

    // 2. Mostrar la persona por pantalla
    printf("\nLa persona tiene %d anyos, mide %.2f metros y pesa %.2f kilogramos, se llama %s y su sexo es %c.\n Nacio el %d de %d del anyo %d.\n",
    p.edad, p.altura, p.peso, p.nombre, p.sexo, p.nacimiento.dia, p.nacimiento.mes, p.nacimiento.anyo);

    return 0;
}
