#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    int i;
    printf("Indica un numero -> ");
    scanf("%d",&num);
    for (i = 1; i >= num; i++){
        if(num/i==num){
            printf("%d es multiplo de %d\n",i,num);
        }
    }
}