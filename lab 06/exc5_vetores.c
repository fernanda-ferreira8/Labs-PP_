/*5. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i
a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/

#include <stdio.h>

int main()
{

  int i;
  int A[50];

  for (i = 0; i <= 49; i++)
  {
    A[i] = (i + 5 * i) % (i + 1);
    printf("O valor da posicao %d e: %d\n", i, A[i]);
  }

  return 0;
}