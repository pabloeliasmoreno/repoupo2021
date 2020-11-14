#include <stdio.h>
float cels, fahr;
int main(){
    printf("Indica una temperatura en Celsius y la transformo a Fahrenheit -> ");
    scanf("%f",&cels);
    fahr = ((cels*1.8)+32);
    printf("\n%.1f grados celsius son %.1f grados Fahrenheit.",cels,fahr);
    return 0;
}