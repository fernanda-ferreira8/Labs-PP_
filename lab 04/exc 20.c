/*20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões*/

#include <stdio.h>

int main()
{
  int i;
  int j;
  int soma = 0;

  for (i = 2; i < 2000000; i++)
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
      soma += i;
    }
  }

  printf("Soma: %d\n", soma);

  return 0;
}