/*1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int main()
{
  int n[4][4];
  int i;
  int j;
  int k = 0;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("Digite um numero (Linha %d Coluna %d) aqui:", i, j);
      scanf("%d", &n[i][j]);
    }
  }

  printf("A posicao dos valores maiores que 10 e:\n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (n[i][j] > 10)
      {
        printf("Linha %d Coluna%d\n", i, j);
        k++;
      }
    }
  }
  printf("A quantidade de valores maior que 10 e: %d\n", k);

  return 0;
}