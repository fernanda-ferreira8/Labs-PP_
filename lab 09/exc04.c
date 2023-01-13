/*4. Faça um programa que leia 2 valores inteiros e chame uma função que receba
estas 2 variáveis e troque o seu conteúdo, i.e., esta função é chamada passando
duas variáveis A e B, por exemplo, e após a execução da função, A conterá o
valor de B e B terá o valor de A. */

#include <stdio.h>

int variaveis(int *ponteiro_A, int *ponteiro_B);

int main() {
  int A, B;

  printf("Digite dois valores inteiros aqui: ");
  scanf("%d %d", &A, &B);

  variaveis(&A, &B);
  printf("Apos a troca, A vale %d e B vale %d", A, B);

  return 0;
}

int variaveis(int *ponteiro_A, int *ponteiro_B) {

  int aux; // variável auxiliar

  aux = *ponteiro_A;
  *ponteiro_A = *ponteiro_B;
  *ponteiro_B = aux;
}