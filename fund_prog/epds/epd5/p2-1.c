#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definir variables globales
#define NUMMUNICIPIOS 5
#define NUMPARTIDOS 5
// Prototipos de funciones
int introResElect();

// Main
int main()
{
    int opcion;
    printf("Elecciones Generales Espana.\n1. Introducir resultados electorales\n2. Mostrar recuento electoral por municipio\n3. Mostrar recuento electoral nacional\n0. Salir\n");
    scanf("%d", &opcion);
    // Seleccionar opción
    if (opcion == 1){
        introResElect();
    }
    else if (opcion == 2){

    }
    else if (opcion == 3){

    }
    else if (opcion == 0){
        printf("Saliendo del programa...");
    }
    else {
        printf("Has introducido un valor incorrecto.\n");
        main();
    }
    return 0;
}

// Introducir resultados electorales
int introResElect()
{
    int datos[NUMMUNICIPIOS][NUMPARTIDOS][3];
    int municipios, partidos, i, codmun;
    printf("Introduce un numero de municipios que no supere 5: ");
    scanf("%d",&municipios);
    printf("Introduce un numero de partidos politicos no superior a 5: ");
    scanf("%d",&partidos);
    if ((municipios>NUMMUNICIPIOS)||(partidos>NUMPARTIDOS))
    {
        printf("Has introducido mal uno de los datos.\n");
        introResElect();
    } else {
        printf("Introducimos codigos de ciudades:\n");

        for (i = 0; i <= municipios; i++){
            printf("Introduce codigo de ciudad %d:",i);
            scanf("%d",&codmun);
            printf("\n%d", codmun);
            datos[i][0][0] = datos[codmun][0][0];
        }
        for (i = 0; i <= municipios; i++){
            printf("\n%d",datos[i][0][0]);
        }
    }
}