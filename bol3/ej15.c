#include <stdio.h>
int main()
{
    int i = 0, j = 0, h;
    printf("Indica un valor para H: ");
    scanf("%d", &h);
    for (i = 0; i < h; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}