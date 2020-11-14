#include <stdio.h>
/*
    EJERCICIO: 2.5
    ENUNCIADO:
        Dada una fecha con su día, mes y año, leída por teclado,
        mostrar cual es la fecha del día anterior
*/
int main(){
    int dia, mes, anyo;
    printf("Indica una fecha separada por guiones: ");
    scanf("%d-%d-%d",&dia,&mes,&anyo);
    if (mes == "01" || mes == "03" || mes == "05" || mes == "07" || mes == "08" || mes == "10"){
        if (dia == 31){
            mes = mes + 1;
            dia = 1;
        } else {
            dia = dia + 1;
        }
    } else if (mes == "04" || mes == "06" || mes == "09" || mes == "11") {
        if (dia == 30){
            mes = mes + 1;
            dia = 1;
        } else {
            dia = dia + 1;
        }
    } else if (mes == "02"){ // Para el caso de febrero no vamos a contemplar si es bisiesto o no
        if (dia == 28){
            mes = mes + 1;
            dia = 1;
        } else {
            dia = dia + 1;
        }
    } else { // Por descarte nos queda diciembre
        if (dia == 31){
            anyo = anyo + 1;
            mes = 1;
            dia = 1;
        } else {
            dia = dia + 1;
        }
    }
    printf("\nLa siguiente fecha es %d-%d-%d",dia,mes,anyo);
}