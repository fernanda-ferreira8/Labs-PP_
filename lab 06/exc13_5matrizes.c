/*5. Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i
2
- 1 se i = j;
A[i][j] = 4i
3 – 5j
2 + 1 se i > j*/

#include <stdio.h>

int main()
{
  int n[10][10];
  int i;
  int j;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (i < j)
      {
        n[i][j] = 2 * i + 7 * j - 2;
      }
      if (i == j)
      {
        n[i][j] = 3 * (i * i) - 1;
      }
      if (i > j)
      {
        n[i][j] = (4 * (i * i * i) - 5 * (j * j)) + 1;
      }
      printf("%d ", n[i][j]);
    }
    printf("\n");
  }
  return 0;
}