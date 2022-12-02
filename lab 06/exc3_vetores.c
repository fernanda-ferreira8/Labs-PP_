/*3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.*/

#include <stdio.h>

int main()
{
  int vetor[6] = {1, 2, 3, 4, 5, 6};
  int i = 0;

      for (i = 0; i < 6; i--)
  {
    printf("%d\n%d\n %d\n %d\n %d\n %d\n", vetor[5], vetor[4], vetor[3], vetor[2], vetor[1], vetor[0]);
  }

  return 0;
}