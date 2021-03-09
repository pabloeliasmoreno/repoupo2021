/*
    EJERCICIO: 5.19
    ENUNCIADO:
         Sea un vector t de N enteros, ordenado ascendentemente, y
         un entero k>=0. Diseñar un algoritmo que calcule el número de pares
         (i,j) que verifiquen: 0<=i<=j<N y t[j] – t[i] <= k

*/
#include <stdio.h>
#define N 4
int numeroPares(int v[N], int k);
int main()
{
    int t[N] = {1, 2, 3, 4};
    int res;
    res = numeroPares(t, 2);
    printf("Resultado: %d\n", res);
    return 0;
}

int numeroPares(int v[N], int k)
{
    int i, j, res = 0;
    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++)
        {
            if (v[j] - v[i] <= k)
            {
                res++;
            }
        }
    }
    return res;
}