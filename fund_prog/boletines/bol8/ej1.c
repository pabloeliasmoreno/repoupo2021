#include <stdio.h>
#include <string.h>
#define TAM 100

int main()
{
    int n = 0;
    char nombre[TAM] = "";
    float calif;
    FILE *f;
    f = fopen("asignaturas.txt", "a");

    if (f == NULL)
        printf("No se ha podido abrir el fichero.");
    else
    {
        while (strcmp(nombre, "salir\n") != 0)
        {
            printf("Nombre asignatura (o \"salir\" para salir): ");
            scanf("%s",nombre);
            fflush(stdin);
            printf("Nota: ");
            scanf("%f", &calif);
            if (strcmp(nombre, "salir") != 0){
                fprintf(f, "%s %f\n", nombre, calif);
            }
        }
    fclose(f);
    }
    return 0;
}
