/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/

#include <stdio.h>
#include <time.h>

int main()
{
  int n[5][5];
  int i;
  int j;

  srand(time(NULL));

  printf("----- BINGO -----\n");
  for (i = 0; i < 5; i++)
  {
    printf("|");
    for (j = 0; j < 5; j++)
    {
      n[i][j] = rand() % 100;
      printf("%d ", n[i][j]);
    }
    printf("|");
    printf("\n");
  }
  printf("-----------------\n");
  return 0;
}
