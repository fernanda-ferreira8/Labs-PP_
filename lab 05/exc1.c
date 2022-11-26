/*1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

// São 23 exercícios mesmo, é que na lista pulou o 22

#include <stdio.h>

int dobro(int num);

int main()
{
  int num;
  int resultado;

  printf("Digite um numero inteiro aqui: \n");
  scanf("%d", &num);

  resultado = dobro(num);
  printf("O dobro do numero eh %d!", resultado);

  return 0;
}

int dobro(int num)
{
  int dobro;

  dobro = num * 2;

  return dobro;
}