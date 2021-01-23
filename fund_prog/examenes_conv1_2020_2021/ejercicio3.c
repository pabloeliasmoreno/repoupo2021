#include <stdio.h>

void modificarSaldo(float *cuenta, float n);

int main()
{
    float cuenta = 5000;
    printf("Saldo inicial: %f\n", cuenta);
    modificarSaldo(&cuenta, +1000);
    printf("Saldo despues de incrementar: %f\n", cuenta);
    modificarSaldo(&cuenta, -3000);
    printf("Saldo despues de decrementar: %f\n", cuenta);
    modificarSaldo(&cuenta, -10000);
    printf("Saldo despues de decrementar limite: %f\n", cuenta);
    return 0;
}

void modificarSaldo(float *cuenta, float n)
{
    if (*cuenta + n < 0)
    {
        printf("No se puede realizar la operacion\n");
    }
    else
    {
        *cuenta = *cuenta + n;
    }
}