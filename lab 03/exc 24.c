/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int estado;
  float produto;
  float valor_final;

  printf("Digite o valor do produto aqui: \n");
  scanf("%f", &produto);

  if (produto <= 0)
  {
    printf("O valor dado ao produto eh invalido! \n");
  }

  printf("Escreva o numero do estado que deseja analisar: \n(1)MG\n(2)SP\n(3)RJ\n(4)MS\n");
  scanf("%d", &estado);

  switch (estado)
  {
  case (1):
    printf("O Valor do produto no estado de MG eh: %.2f\n", valor_final = produto * 1.07);

    break;

  case (2):
    printf("O Valor do produto no estado de SP eh: %.2f\n", valor_final = produto * 1.12);

    break;

  case (3):
    printf("O Valor do produto no estado do RJ eh: %.2f\n", valor_final = produto * 1.15);

    break;

  case (4):
    printf("O Valor do produto no estado do RJ eh: %.2f\n", valor_final = produto * 1.08);

    break;

  default:

    printf("Erro, o valor escolhido não representa nenhum estado na lista! \n");

    break;
  }

  return 0;
}
