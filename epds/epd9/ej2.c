#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 50
typedef struct{
    char origen[MAXCHAR];
    char destino[MAXCHAR];
    char compania[MAXCHAR];
} Vuelos;

void destinos(Vuelos[], int, int [], int *, char[]);

int main(){
    Vuelos rutas[10] = {
        {"LEZL", "LEMD", "IB"},
        {"LEMG", "LEMD", "VY"},
        {"LEZL", "LEJR", "VY"}
    };
    int numPos[10];
    int pos, i;
    char nombreOrigen[4] = "LEZL";
    destinos(rutas,3,numPos,&pos,nombreOrigen);

    printf("DESTINOS DESDE %s:\n",nombreOrigen);
    for(i=0;i<pos;i++){
        printf("%s\n", rutas[numPos[i]].destino);
    }
}

void destinos(Vuelos rutas[10], int numVal, int numPos[10], int *pos, char origen[MAXCHAR]){
    int i;
    *pos=0;
    for(i=0;i<numVal;i++){
        if(strcmp(origen, rutas[i].origen)==0){
            numPos[*pos] = i;
            (*pos)++;
        }
    }
}