#include <stdio.h>

#define TAM 100
#define NFIL 100
#define NCOL 100

typedef struct{
    char nombre[TAM];
    int curso, semestre;
    float calificacion;
    int numMatriculaciones;
} Asignatura;

float estadisticasAsignaturas(Asignatura asignaturas[][NCOL], int nfil, int ncol, float *califMedia, float *califMax, float *califMin);

int main()
{
    Asignatura m[NFIL][NCOL] = { {{"FP", 1, 1, 10, 1}, {"ES", 1, 1, 10, 1}},
                                 {{"AL", 1, 1, 10, 1}, {"CAL", 1, 1, 10, 1}} };
    float califMedia, califMin, califMax, matricMedia;

    matricMedia = estadisticasAsignaturas(m, 2, 2, &califMedia, &califMax, &califMin);
    printf("Media matriculaciones: %f\n", matricMedia);
    printf("Media calificaciones: %f\n", califMedia);
    printf("Minimo calificaciones: %f\n", califMin);
    printf("Maximo calificaciones: %f\n", califMax);
    return 0;
}

float estadisticasAsignaturas(Asignatura asignaturas[][NCOL], int nfil, int ncol, float *califMedia, float *califMax, float *califMin)
{
    int i, j;
    float matricMedia = 0;
    *califMedia = 0;
    *califMin = asignaturas[0][0].calificacion;
    *califMax = asignaturas[0][0].calificacion;

    for (i = 0; i < nfil; i++)
    {
        for (j = 0; j < ncol; j++)
        {
            matricMedia += asignaturas[i][j].numMatriculaciones;
            *califMedia += asignaturas[i][j].calificacion;
            if (asignaturas[i][j].calificacion < *califMin)
            {
                *califMin = asignaturas[i][j].calificacion;
            }
            if (asignaturas[i][j].calificacion > *califMax)
            {
                *califMax = asignaturas[i][j].calificacion;
            }
        }
    }
    *califMedia /= nfil * ncol;
    matricMedia /= nfil * ncol;

    return matricMedia;
}