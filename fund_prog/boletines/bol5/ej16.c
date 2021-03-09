/*
    EJERCICIO: 5.16
    ENUNCIADO:
         Escriba una función tal que dada una matriz cuadrada de
         NxN enteros, devuelva cierto si ésta tiene dos elementos,
         uno en la diagonal principal y otro en la secundaria que
         sean iguales. Por ejemplo:
            1 2 3 4                     1 2 3 4
            2 3 7 5 devuelve falso      2 3 4 5 devuelve cierto
            3 0 5 6                     4 5 6 7
            4 2 2 1                    -1 4 4 5

*/
#include <stdio.h>
#define N 4
int igualesPrincipalSecundaria(int m[N][N]);

int main()
{
    int w[N][N] = {{1,2,3,4},
                   {2,3,7,5},
                   {4,5,6,7},
                   {-1,4,4,5}};
    int res;
    res = igualesPrincipalSecundaria(w);
    if(res){
        printf("Existe elemento coincidente.\n");
    }else{
        printf("No existe elemento coincidente.\n");
    }
    return 0;
}

int igualesPrincipalSecundaria(int m[N][N])
{
    int i, j, exito;
    if (N % 2 == 1)
    {
        exito = 1;
    }
    else
    {
        i = 0;
        exito = 0;
        while (i < N && !exito)
        {
            // Elemento de la diagonal principal: m[i][i]
            j = 0;
            while (j < N && !exito)
            {
                // Elemento de la diagonal secundaria: m[j][N-j-1]
                if (m[i][i] == m[j][N - j - 1])
                {
                    exito = 1;
                }
                else
                {
                    j++;
                }
                if (!exito)
                {
                    i++;
                }
            }
        }
        return exito;
    }
}