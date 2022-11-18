/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i; // variavel para contagem (contador)
  int valor;

  for (i = 1; i <= 5; i++)
  {
    valor = i * 3;
    printf("%d eh multiplo de 3\n", valor);
  }
  return 0;
}