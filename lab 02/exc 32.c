/*32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num_inteiro;
  int antecessor;
  int sucessor;
  int soma;

  printf("Digite um numero inteiro aqui: \n");
  scanf("%d", &num_inteiro);

  antecessor = (num_inteiro * 2) - 1;
  sucessor = (num_inteiro * 3) + 1;
  soma = antecessor + sucessor;
  printf("A soma dos valores e: %d", soma);

  return 0;
}
