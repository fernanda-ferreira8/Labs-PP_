/* 05. Leia um número real e imprima a quinta parte deste número. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num;
  float numQuinta_parte;

  printf("Digite um valor real aqui: \n");
  scanf("%f", &num);
  numQuinta_parte = num / 5;
  printf("O valor encontrado foi: %0.2f \n", numQuinta_parte);

  return 0;
}