/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int primeiro_num;
  int numero;
  int maior_valor;
  int menor_valor;
  int i;

  printf("Digite um numero: ");
  scanf("%d", &primeiro_num);

  maior_valor = primeiro_num;
  menor_valor = primeiro_num;

  for (i = 1; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > maior_valor)
    {
      maior_valor = numero;
    }
    else if (numero < menor_valor)
    {
      menor_valor = numero;
    }
  }
  printf("O maior valor eh: %d e o menor valor eh: %d", maior_valor, menor_valor);

  return 0;
}