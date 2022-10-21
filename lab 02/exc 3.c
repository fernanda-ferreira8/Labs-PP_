/*03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int soma;
  int num1;
  int num2;
  int num3;

  printf("Digite o primeiro valor\n");
  scanf("%d", &num1);
  printf("Digite o segundo valor\n");
  scanf("%d", &num2);
  printf("Digite o terceiro valor\n");
  scanf("%d", &num3);

  soma = num1 + num2 + num3;

  printf("A soma dos valores é: %d", soma);

  return 0;
}