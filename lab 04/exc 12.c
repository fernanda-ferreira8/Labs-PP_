/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numero;
  int soma;

  printf("Digite um numero inteiro aqui:");
  scanf("%d", &numero);
  printf("O valor encontrado foi %d\n", numero);

  soma = 1; // Inicia com o 1 porque todo num é divisível por 1.

  for (int i = 2; i <= (numero / 2.0 + 1); i++)
  {
    if (numero % i == 0)
    {
      printf("%d - ", i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d (com exceção dele mesmo) eh %d\n", numero, soma);
  return 0;
}
