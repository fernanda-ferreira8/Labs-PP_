/*4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i; // i = variável para contagem

  for (i = 0; i <= 1000000; i += 1000)
  {
    printf("%d\n", i);
  }
  return 0;
}