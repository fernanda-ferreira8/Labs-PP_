/*13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.*/

#include <stdio.h>
#include <stdlin.h>

int main()
{
  int i;
  int j;
  int k;

  for (i = 1; i < 1000; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      j = j + i;
    }
  }

  printf("%d\n", j);
  return 0;
}