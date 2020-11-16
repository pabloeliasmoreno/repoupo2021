#include <stdio.h>
int main(){
	int c;
	printf("Introduce una tecla numerica: ");
	scanf("%d",&c);
	if ((c >= 0)&&(c <= 9)){
		return 0;
	}else{
		printf("\nHas introducido una tecla incorrecta\n");
	}
}
