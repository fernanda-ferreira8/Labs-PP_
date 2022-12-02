/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

#include <stdio.h>

int main()
{
  int n[5];
  int i;
  int j;
  int m = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Digite um numero para o vetor[%d] aqui:", i);
    scanf("%d", &n[i]);
  }

  m = n[0];
  j = i;
  for (i = 0; i < 5; i++)
  {
    if (n[i] > m)
    {
      m = n[i];
      j = i;
    }
  }
  printf("O maior valor esta na posicao %d\n", j);

  i = 0;
  m = n[0];
  j = i;
  for (i = 0; i < 5; i++)
  {
    if (n[i] < m)
    {
      m = n[i];
      j = i;
    }
  }
  printf("O menor valor esta na posicao %d\n", j);

  return 0;
}