#include <stdio.h>
int main(){
    int hora, minuto, segundo, total;
    printf("Indica una hora con el formato HH:MM:SS. -> ");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);
    if ((hora > 23) || (minuto > 60) || (segundo > 60))
    {
        printf("\nHas indicado mal la hora. Los valores deben ser numeros naturales y que no superen los valores\nHora: 0 - 23\nMinuto o Segundo: 00 - 59");
    }
    else
    {
        total = ((hora*3600)+(minuto*60)+(segundo));
        printf("\nLa hora %d:%d:%d tiene en total %d segundos.\n", hora, minuto, segundo, total);
    }
    return 0;
}