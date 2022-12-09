/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#include <string.h>

int main()
{
  char nome[30];
  float valor, desconto, vista;

  printf("Digite o nome do produto aqui: \n");
  fgets(nome, 30, stdin);

  printf("Digite o preco do produto aqui: \n");
  scanf("%f", &valor);

  desconto = valor * 0.1;
  vista = valor - desconto;

  printf("Produto: %s\n", nome);
  printf("Valor: %.2f\n", valor);
  printf("O desconto eh: %.2f\n", desconto);
  printf("Valor a vista: %.2f\n", vista);

  return 0;
}