#include <stdio.h>
#include <string.h>

#define TAM 128
#define N 20

typedef struct{
    char nombre [TAM];
    char apellido [TAM];
    char segundoapellido [TAM];
    char departamento [TAM];
    int edad;
    char sexo;
    float sueldo;
} Empleado;

void imprimePersona (Empleado empleado);
float sueldoMedio (Empleado empresa[], int tam_logico);

int main (void){
    Empleado empresa[N] = {
        {"Manuel", "Jesus", "Flores", "Contabilidad", 20, 'H', 1200.0},
        {"Alvaro", "Jose", "Reverte", "IT", 19, 'H', 1750.0},
        {"Marta", "Perez", "Duarte", "Contabilidad", 35, 'M', 2500.0},
        {"Jose", "Perez", "Flores", "Marketing", 25, 'H', 1100.0},
        {"Maria", "Jesus", "Andrade", "Desarrollo", 20, 'M', 985.0},
    };
    int i, tam_logico=5;
    printf("\n");
    for(i=0;i<tam_logico;i++){
        imprimePersona(empresa[i]);
        if (i!=tam_logico-1){
            printf("\n");
        }
    }
    printf("\n\nSueldo medio = %.1f euros\n\n",sueldoMedio(empresa,5));
    return 0;
}

void imprimePersona (Empleado empleado){
    printf("[%d,%c] %s %s %s (%s, %0.1f euros)",empleado.edad, empleado.sexo, empleado.nombre, empleado.apellido, empleado.segundoapellido, empleado.departamento, empleado.sueldo);
}

float sueldoMedio(Empleado empresa[], int tam_logico){
    float sumatorio = 0.0;
    int i;
    for(i=0;i<tam_logico;i++){
        sumatorio+=empresa[i].sueldo;
    }
    return sumatorio/tam_logico;
}