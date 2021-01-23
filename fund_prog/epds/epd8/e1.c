#include <stdio.h>
#include <string.h>
void main(void)
{
    int i = 0;
    char cad[] = "Hola";
    for (i = 0; i <= strlen(cad); i++)
        printf("cad[%d]=%c\n", i, cad[i]);
}