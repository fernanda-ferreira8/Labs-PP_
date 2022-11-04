#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x;
  float y;
  float z;
  float operacao;
  int escolha;

  printf("Escolha uma operacao:\n(1)Geometrica\n(2)Ponderada\n(3)Harmonica\n(4)Aritmetica \n");
  scanf("%d", &escolha);

  if (escolha > 4)
  {
    printf("Opcao invalida! \n");
  }

  printf("Digite os valores para x, y e z aqui: \n");
  scanf("%f%f%f", &x, &y, &z);

  switch (escolha)
  {
  case (1):
    operacao = cbrt(x * y * z);
    printf("O resultado eh %f! \n", operacao);
    break;

  case (2):
    operacao = ((x * 1) + (y * 2) + (z * 3)) / 3;
    printf("O resultado eh %f! \n", operacao);
    break;

  case (3):
    operacao = (1) / ((1 / x) + (1 / y) + (1 / z));
    printf("O resultado eh %f! \n", operacao);
    break;

  case (4):
    operacao = (x + y + z) / 3;
    printf("O resultado eh %f! \n", operacao);
    break;
  }

  return 0;
}