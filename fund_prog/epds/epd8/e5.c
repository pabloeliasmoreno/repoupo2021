#include <stdio.h>
#define DIM 100
void main(void)
{
    char tab[DIM][DIM];
    strcpy(tab[0],"Lunes");
    strcpy(tab[1],"Martes");
    printf("%s %s", tab[0], tab[1]);
}
