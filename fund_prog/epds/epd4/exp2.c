#include <stdio.h>
#define TAM1 2
#define TAM2 4
#define TAM3 3

void main()
{
    int i, j, k;
    int m[TAM1][TAM2][TAM3] = {
        {{1, 3, 5},
         {7, 9, 11},
         {13, 15, 17},
         {19, 21, 23}},

        {{2, 4, 6},
         {8, 10, 12},
         {14, 16, 18},
         {20, 22, 24}}};

    for (i = 0; i < TAM1; i++)
    {
        printf("k= ");
        for (k = 0; k < TAM3; k++)
            printf("%2d ", k);
        printf("\n ---------------- i=%d\n", i);
        for (j = 0; j < TAM2; j++)
        {
            printf("j=%d |", j);
            for (k = 0; k < TAM3; k++)
                printf("%2d ", m[i][j][k]);
            printf("|\n");
        }
        printf(" \n");
    }
}