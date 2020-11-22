#include <stdio.h>
int hora, minuto, segundo;
int main()
{
    printf("Introduce una cantidad de segundos: ");
    scanf("%d", &segundo);
    hora = segundo / 3600;
    minuto = ((segundo - (hora * 3600)) / 60);
    segundo = (segundo - ((minuto * 60) + (hora * 3600)));
    printf("\nEl tiempo total es %d:%d:%d\n",hora,minuto,segundo);

    return 0;
}
