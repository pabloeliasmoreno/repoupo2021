#include <stdio.h>
int tiempo(int hora, int min, int seg);

int main()
{
    int hora, min, seg, total;
    printf("Indica una hora con el siguiente formato HH:MM:SS -> ");
    scanf("%d:%d:%d",&hora,&min,&seg);
    total = tiempo(hora, min, seg);
    printf("La hora %d:%d:%d tiene %d segundos.",hora,min,seg,total);
}

int tiempo(int hora, int min, int seg)
{
    int segundos;
    segundos = ((hora * 3600) + (min * 60) + (seg));
    return segundos;
}