/*6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

#include <stdio.h>
#include <time.h>

int main()
{
  int n[4][4];
  int i;
  int j;
  int x;
  
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      n[i][j] = rand() % 20;
      printf("%d ", n[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  i = 0;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (j > i)
      {
        n[i][j] = 0;
      }
      printf("%d ", n[i][j]);
    }
    printf("\n");
  }

  return 0;
}