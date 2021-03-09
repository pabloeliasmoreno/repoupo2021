#include <stdio.h>
int aritmetica(int n1, int n2);

int main()
{
    int n1, n2, res;
    printf("Indica dos numeros para calcular su media aritmetica: ");
    scanf("%d %d",&n1,&n2);
    res = aritmetica(n1, n2);
    printf("\nLa media aritmetica de %d y %d es %d",n1,n2,res);
    return 0;
}

int aritmetica(int n1, int n2)
{
    int media;
    media = ((n1 + n2)/2);
    return media;
}