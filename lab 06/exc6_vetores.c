/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor.*/

#include <stdio.h>

int main()
{

  int A[10];
  int b = 0;
  int i;
  int j;
  int r;

  for (i = 0; i <= 9; i++)
  {
    printf("Digite um valor para o vetor %d aqui:\n", i);
    scanf("%d", &A[i]);
  }

  for (i = 0; i <= 10; i++)
  {
    for (j = 2; j < A[i]; j++)
    {
      r = A[i] % j;
      if (r == 0)
      {
        b = 1;
      }
    }
    if (b == 0)
    {
      printf("O vetor na posicao %d eh primo\n", i);
    }
    b = 0;
  }

  return 0;
}