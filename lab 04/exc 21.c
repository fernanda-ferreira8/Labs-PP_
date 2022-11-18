/*21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a;
  int b;
  int i;
  int j;
  int cont = 0;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);

  printf("Digite o segundo número: ");
  scanf("%d", &b);

  for (i = a; i <= b; i++)
  {

    for (j = 2; j < i; j++)
    {

      if (i % j == 0)
      {
        break;
      }
    }

    if (i == j)
    {
      cont++;
    }
  }
  printf("Existem %d números primos entre %d e %d.\n", cont, a, b);

  return 0;
}