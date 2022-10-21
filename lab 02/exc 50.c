/*50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int idade;
  int ano_nascimento;
  int ano_atual = 2022;

  printf("Digite o ano de nascimento aqui: \n ");
  scanf("%d", &ano_nascimento);

  idade = ano_atual - ano_nascimento;
  printf("idade: %d", idade);

  return 0;
}