#include<stdio.h>
void main(void){
    FILE * f;
    int c,suma=0;
    f = fopen("numeros.txt", "r");
    if (f == NULL)
        puts("Error al abrir el fichero");
    else
    {
        while(!feof(f)){
            fscanf(f,"%d",&c);
            suma = suma + c;
        }
        printf("La suma es: %d",suma);
        fclose(f);
    }
}
