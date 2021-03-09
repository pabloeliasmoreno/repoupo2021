#include <stdio.h>
#include <string.h>

#define MAXCAR 200
#define NUM_PELICULAS 100
#define NUM_VALORACIONES 4

int leerPeliculas (char nombreFichero[MAXCAR], char titulos [NUM_PELICULAS][MAXCAR], int valoraciones [NUM_PELICULAS][NUM_VALORACIONES]);

float mejorPelicula (int numPeliculas, char titulos [NUM_PELICULAS][MAXCAR], int valoraciones [NUM_PELICULAS][NUM_VALORACIONES], char tituloMejor [MAXCAR]);

void main (){
    char titulos [NUM_PELICULAS][MAXCAR], tituloMejor [MAXCAR];
    int n, valoraciones[NUM_PELICULAS][NUM_VALORACIONES];
    float valoracion;

    n = leerPeliculas("peliculas.txt", titulos, valoraciones);
    valoracion = mejorPelicula(n, titulos, valoraciones, tituloMejor);

    printf("Mejor pelicula: %s\nValoracion: %.2f\n", tituloMejor, valoracion);
}

int leerPeliculas(char nombreFichero[MAXCAR], char titulos[NUM_PELICULAS][MAXCAR], int valoraciones[NUM_PELICULAS][NUM_VALORACIONES]){
    FILE *f;
    int i, j, n=0;
    f = fopen(nombreFichero, "r");
    if (f != NULL){
        fscanf(f, "%d\n", &n);
        for(i=0;i<n;i++){
            fgets(titulos[i], MAXCAR, f);
            for (j=0;j<NUM_PELICULAS-1;j++)
                fscanf(f, "%d", &valoraciones[i][j]);
            fscanf(f, "%d\n", &valoraciones[i][j]);
        }
        fclose(f);
    }
    return n;
}

float mejorPelicula(int numPeliculas, char titulos[NUM_PELICULAS][MAXCAR], int valoraciones[NUM_PELICULAS][NUM_VALORACIONES], char tituloMejor[MAXCAR]){
    float media, res=0;
    int i, j, pos=0;
    for (i=0;i<numPeliculas;i++){
        media = 0;
        for (j=0;j<NUM_VALORACIONES;j++)
            media+= valoraciones[i][j];
        media /= NUM_VALORACIONES;
        if (media > res){
            res=media;
            pos=i;
        }
    }
    strcpy(tituloMejor, titulos[pos]);
    return res;
}