#include <stdio.h>
int hora, minuto, segundo, correcto;
int main (){
    printf("Indica una hora con el formato HH:MM:SS. -> ");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);
    if ((hora > 23) || (minuto > 60) || (segundo > 60)){
        printf("\nHas indicado mal la hora. Los valores deben ser numeros naturales y que no superen los valores\nHora: 0 - 23\nMinuto o Segundo: 00 - 59");
    } else {
        printf("\nHas indicado %d horas, %d minutos y %d segundos.\n", hora, minuto, segundo);
    }
    return 0;
}