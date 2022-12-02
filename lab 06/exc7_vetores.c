/*7. Faça um programa que receba 6 números inteiros e mostre:
 Os números pares digitados;
 A soma dos números pares digitados;
 Os números ímpares digitados;
 A quantidade de números ímpares digitados;*/

#include <stdio.h>

int main()
{
  int n[6];
  int i;
  int j = 0;
  int soma = 0;

  for (i = 0; i < 6; i++)
  {
    printf("Digite um numero (posicao %d) aqui:", i);
    scanf("%d", &n[i]);
  }

  for (i = 0; i < 6; i++)
  {
    if (n[i] % 2 == 0)
    {
      printf("O numero na %d (posicao[%d]) eh par\n", n[i], i);
      soma = soma + n[i];
    }
  }
  printf("A soma dos numeros pares e: %d\n", soma);

  for (i = 0; i < 6; i++)
  {
    if (n[i] % 2 != 0)
    {
      printf("O numero na %d (posicao[%d]) e impar\n", n[i], i);
      j = j + 1;
    }
  }
  printf("Foram escritos %d numeros impares\n", j);

  return 0;
}