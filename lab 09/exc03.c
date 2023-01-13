/*3. Escreva um programa que contenha duas variáveis inteiras.
Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço. */

#include <stdio.h>

int main() {

  int var_1, var_2;
  int *pont_1, *pont_2; // pont = ponteiro

  pont_1 = var_1;
  pont_2 = var_2;

  printf("Digite dois valores para as variaveis 1 e 2, respectivamente: ");
  scanf("%d %d", &var_1, &var_2);

  if (&var_1 > &var_2) {
    printf("O endereco %d da variavel 1 eh maior!", &var_1);
  } else if (&var_2 > &var_1) {
    printf("O endereco %d da varivel 2 eh maior!", &var_2);
  }

  return 0;
}