/*  Se emplea "unsigned long long int" para poder
    alcanzar hasta el valor de Fib(93).
*/
#include <stdio.h>
int main()
{
    unsigned long long int n = 0, i = 0, a = 0, b = 1, fibo = 1;
    printf("Introduce un numero natural para calcular Fibonacci: ");
    scanf("%llu",&n);
    for (i = 0; i < n-2; i++)
    {
        fibo = a + b;
        printf("%llu,",fibo);
        a = b;
        b = fibo;
    }
    fibo = a + b;
    printf("\nEl fibonacci de %llu es %llu\n",n,fibo);
    return 0;
}