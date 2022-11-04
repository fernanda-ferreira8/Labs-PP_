#include <stdio.h>
#include <stdlib.h>

int main()
{
  float valor;
  float comissao;

  printf("Escreva o valor da venda:\n");
  scanf("%f", &valor);

  if (valor >= 100000)
  {
    comissao = (valor * 0.16) + 700;
    printf("O valor da comissao eh:%.2f\n", comissao);
  }

  if (valor < 100000 && valor >= 80000)
  {
    comissao = (valor * 0.14) + 650;
    printf("O valor da comissao eh:%.2f \n", comissao);
  }

  if (valor < 80000 && valor >= 60000)
  {
    comissao = (valor * 0.14) + 600;
    printf("O valor da comissao eh:%.2f \n", comissao);
  }

  if (valor < 60000 && valor >= 40000)
  {
    comissao = (valor * 0.14) + 550;
    printf("O valor da comissao eh:%.2f \n", comissao);
  }

  if (valor < 40000 && valor >= 20000)
  {
    comissao = (valor * 0.14) + 500;
    printf("O valor da comissao eh:%f \n", comissao);
  }

  if (valor < 20000)
  {
    comissao = (valor * 0.14) + 500;
    printf("O valor da comissao eh:%.2f \n", comissao);
  }
  return 0;
}