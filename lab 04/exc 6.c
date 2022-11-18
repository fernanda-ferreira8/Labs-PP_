/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i; // i = variável para contagem
  float media_i;

  for (i = 1; i >= 1 && i <= 10; i++)
  {
    i = i++;
    media_i = (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10) / 10;
    printf("%d\n", i);
  }
  printf("A media e %.2f", media_i);
  return 0;
}