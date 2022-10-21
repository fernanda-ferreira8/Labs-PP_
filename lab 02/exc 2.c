/*02. Faça um programa que leia um número real e o imprima. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num;

  printf("Digite um número real aqui:\n");
  scanf("%f", &num);

  printf("Valor encontrado: %0.1f", num);

  return 0;
}