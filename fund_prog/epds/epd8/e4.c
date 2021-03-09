#include <stdio.h>
#define DIM 9
void main(void)
{
    char tab[DIM][DIM] = {"Lunes", "Martes", {'M', 'i', 'e', 'r', 'c', 'o', 'l', 'e', 's'}, "Jueves", "Viernes"};
    printf("%s", tab[2]);
}
