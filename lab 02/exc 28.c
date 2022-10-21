/*28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float soma;
  float valor_1;
  float valor_2;
  float valor_3;


  printf("Digite o primeiro valor: \n");
  scanf("%f", &valor_1);

  printf("Digite o segundo valor: \n");
  scanf("%f", &valor_2);

  printf("Digite o terceiro valor: \n");
  scanf("%f", &valor_3);

  soma = valor_1*valor_1 + valor_2*valor_2 + valor_3*valor_3;
  printf("A soma dos quadrados dos três valores é: %0.2f \n", soma);

  return 0;
}