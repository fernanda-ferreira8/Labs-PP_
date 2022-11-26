/*23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:
*
**
***
****
***
**
**/
#include <stdio.h>

int valores(int x);

int main()
{

  int x;
  int funcao;

  printf("Digite o numero de linhas:\n");
  scanf("%d", &x);

  funcao = valores(x);

  return 0;
}
int valores(int x)
{
  int i;
  int j;

  for (i = 1; i <= x; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  for (i = x - 1; i >= 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}