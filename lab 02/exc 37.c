/*37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float valor_produto;
  float desconto;

  printf("Digite o valor de um produto aqui: \n");
  scanf("%f", &valor_produto);

  desconto = valor_produto - (valor_produto * 0.12);
  printf("O valor com desconto e: %0.2f \n", desconto);

  return 0;
}
