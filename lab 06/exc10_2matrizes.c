/*2. Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.*/

#include <stdio.h>

int main()
{
  int n[5][5];
  int i;
  int j;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (i == j)
      {
        printf("1");
      }
      else if (i != j)
      {
        printf("0");
      }
    }
    printf("\n");
  }
  return 0;
}