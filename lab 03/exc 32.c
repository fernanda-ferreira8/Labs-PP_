#include <stdio.h>
#include <stdlib.h>

int main()
{
  int comida;
  int quantidade;
  float valor;

  printf("Escolha uma das opcoes a baixo:\n(100) Cachorro Quente\n(101) Bauru Simples\n(102) Bauru com ovo\n(103) Hamburger\n(104) Cheeseburger\n(105) Suco\n(106) Refrigerante\n");
  scanf("%d", &comida);

  printf("Escreva a quantidade:\n");
  scanf("%d", &quantidade);

  switch (comida)
  {
  case (100):
    valor = quantidade * 1.20;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  case (101):
    valor = quantidade * 1.30;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  case (102):
    valor = quantidade * 1.50;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  case (103):
    valor = quantidade * 1.20;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  case (104):
    valor = quantidade * 1.70;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  case (105):
    valor = quantidade * 2.20;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  case (106):
    valor = quantidade * 1.00;
    printf("O valor eh: R$ %.2f\n", valor);
    break;

  default:
    printf("Opcao inserida eh invalida\n");
    break;
  }

  return 0;
}