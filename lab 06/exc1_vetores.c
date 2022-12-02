/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>

int main()
{

  int vetor_A[6] = {1, 0, 5, -2, -5, 7};
  int soma = (vetor_A[0] + vetor_A[1] + vetor_A[5]);
  vetor_A[4] = 100;

   printf("Os valores do vetor A sao:\n %d\n %d\n %d\n %d\n %d\n %d\n", vetor_A[0], vetor_A[1], vetor_A[2], vetor_A[3], vetor_A[4], vetor_A[5]);
  printf("A soma dos valores eh: %d", soma);
  return 0;
}
