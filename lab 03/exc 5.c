/*5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero;

  printf("Digite um valor inteiro aqui: \n");
  scanf("%d", &numero);

  if (numero % 2 == 0)
  {
    printf("O numero recebido eh par!");
  }

  else
  {
    printf("O numero recebido eh impar!");
  }

  return 0;
}
