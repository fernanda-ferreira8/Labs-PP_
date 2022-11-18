/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;
  int j;

  printf("Digite um numero inteiro positivo aqui: ");
  scanf("%d", &i);

  for (j = 0; j <= i; j++)
  {
    printf("%d\n", j);
  }
  return 0;
}
