#include <stdio.h>
#include <stdlib.h>

int main()
{

  float preco;
  float aumento;

  printf("Digite o preco do produto aqui: \n");
  scanf("%f", &preco);

  if (preco < 50)
  {
    aumento = preco * 1.05;
    printf("O novo preco eh R$ %f\n", aumento);

    if (aumento <= 80)
    {
      printf("Barato\n");
    }

    if (aumento > 80 && aumento <= 120)
    {
      printf("Normal\n");
    }

    if (aumento > 120 && aumento <= 200)
    {
      printf("Caro\n");
    }

    if (aumento > 200)
    {
      printf("Muito caro\n");
    }
  }

  if (preco >= 50 && preco <= 100)
  {
    aumento = preco * 1.10;
    printf("O novo preco eh R$ %f\n", aumento);

    if (aumento <= 80)
    {
      printf("Barato\n");
    }

    if (aumento > 80 && aumento <= 120)
    {
      printf("Normal\n");
    }

    if (aumento > 120 && aumento <= 200)
    {
      printf("Caro\n");
    }

    if (aumento > 200)
    {
      printf("Muito caro\n");
    }
  }

  if (preco > 100)
  {
    aumento = preco * 1.15;
    printf("O novo preco eh R$ %f\n", aumento);

    if (aumento <= 80)
    {
      printf("Barato\n");
    }

    if (aumento > 80 && aumento <= 120)
    {
      printf("Normal\n");
    }

    if (aumento > 120 && aumento <= 200)
    {
      printf("Caro\n");
    }

    if (aumento > 200)
    {
      printf("Muito caro\n");
    }
  }
  return 0;
}
