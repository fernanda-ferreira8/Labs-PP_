/*24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
saída para n = 6 seria:
 *
 ***
 *****
 *******
 *********
************/

#include <stdio.h>

int triangulo(int x);

int main()
{

  int x;
  int funcao;

  printf("Digite o numero de linhas:\n");
  scanf("%d", &x);

  funcao = triangulo(x);

  return 0;
}
int triangulo(int x)
{
  int i;
  int j = 0;
  int k = 0;

  for (i = 1; i <= x; ++i, k = 0)
  {
    for (j = 1; j <= x - i; ++j)
    {
      printf("  ");
    }
    while (k != 2 * i - 1)
    {
      printf("* ");
      ++k;
    }
    printf("\n");
  }
  return 0;
}