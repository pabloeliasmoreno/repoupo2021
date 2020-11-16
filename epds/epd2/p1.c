#include <stdio.h>
int main(){
	int num;
	printf("Introduce un numero cualquiera: ");
	scanf("%d",&num);
	if (num % 2 == 0){
		printf("\nEl numero introducido es multiplo de 2\n");
	}
	if (num % 3 == 0){
		printf("\nEl numero introducido es multiplo de 3\n");
	}
	if (num % 5 == 0){
		printf("\nEl numero introducido es multiplo de 5\n");
	}
	if (num % 7 == 0){
		printf("\nEl numero introducido es multiplo de 7\n");
	}
	if (num % 10 == 0){
		printf("\nEl numero introducido es multiplo de 10\n");
	}
	return 0;
}

