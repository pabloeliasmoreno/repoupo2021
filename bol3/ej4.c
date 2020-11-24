#include <stdio.h>
int main(){
  int num, coc, div, contador;
  coc = 0;
  div = 1;
  contador = 0;

  printf("Ingresa un numero: ");
  scanf("%d", &num);

  while (coc !=1)
  {
    contador++;
    div = div * 10;
    coc = num / div;

    if (coc == 1){
      printf("El numero tiene %d digitos\n", contador + 1);
    }

    if (coc < 1){
      printf("El numero tiene %d digitos\n", contador);
      coc = 1;
    }

    if (num < 10){
        printf("Solo tiene un digito\n");
    }
  }

return 0;
}