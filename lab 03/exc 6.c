/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int num_1;
  int num_2;
  int diferenca_1;
  int diferenca_2;

  printf("Digite dois numeros inteiros aqui (separados por enter): \n");
  scanf("%d %d", &num_1, &num_2);

  diferenca_1 = (num_1 - num_2);
  diferenca_2 = (num_2 - num_1);

  if (num_1 > num_2)
  {
    printf("O numero %d e maior e a diferenca entre eles e %d ", num_1, diferenca_1);
  }

  else
    printf("O numero %d e maior e a diferenca entre eles e %d", num_2, diferenca_2);

  return 0;
}