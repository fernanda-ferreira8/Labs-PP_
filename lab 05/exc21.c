/*21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
*/

#include <stdio.h>

int valor(int x);

int main()
{

  int x;
  int funcao;

  printf("Digite o numero de linhas:\n");
  scanf("%d", &x);

  funcao = valor(x);

  return 0;
}
int valor(int x)
{
  int i;
  int j;

  for (i = 1; i <= x; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf("!");
    }
    printf("\n");
  }

  return 0;
}