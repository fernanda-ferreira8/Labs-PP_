/*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>

int main()
{

  int x;
  int y;
  int i;
  int n;
  int SOMA;
  int A[8];

  for (i = 0; i <= 7; i++)
  {
    printf("Digite o valor aqui: %d: \n", i);
    scanf("%d", &A[i]);
  }

  printf("Digite 2 valores para a posicao do vetor aqui (de 0 a 7):");
  scanf("%d%d", &x, &y);

  SOMA = A[x] + A[y];
  printf("A soma dos valores eh: %d\n", SOMA);

  return 0;
}