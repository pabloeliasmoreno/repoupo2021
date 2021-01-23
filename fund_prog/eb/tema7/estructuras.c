#include <stdio.h>
#define TAM 100
/*
    char: Guardar un símbolo, un carácter
*/
typedef struct{
    int edad;
    float altura, peso;
    char nombre[TAM];
    char sexo;
} Persona; // Nombre que vamos a dar a este tipo de dato

// Declaración de variable tipo estructura
Persona p, q, r;

// Estructuras anidadas
typedef struct {
    int dia, mes, anyo;
} Fecha;

typedef struct {
    int edad;
    float altura, peso;
    char nombre[TAM];
    char sexo;
    Fecha;
} Personas;



// Lectura y escritura en variables de tipo estructura
printf("La edad es %d y el nombre es %s.\n", &p.edad, &p.nombre); // Lectura
p.altura = 1.78; p.sexo = 'M'; // Escritura

// Pasar de puntero a estructura
Persona p;
Persona *q = &p;
(*q).altura = 1.78;
q -> altura = 1.78;

// Tablas de estructuras
Persona v [TAM];
Fecha m [NFIL][NCOL];