/*30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float valor_cotacao;
  float valor_dolar;
  float valor_real;

  printf("Digite o valor da cotacao do dolar aqui: \n");
  scanf("%f", &valor_cotacao);

  printf("Digite um valor em real aqui: \n");
  scanf("%f", &valor_real);

  valor_dolar = valor_real / valor_cotacao;
  printf("O valor correspondente em dolar eh: %0.2f \n", valor_dolar);

  return 0;
}