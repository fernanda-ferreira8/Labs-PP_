/*23. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas
do chamado Triangulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int j;
  int n;
  int cont = 1;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", cont);
      cont++;
    }
    printf("\n");
  }
  return 0;
}
