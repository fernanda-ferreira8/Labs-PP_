/*17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N números inteiros existentes entre eles.*/

#include <stdio.h>

int numeros(int n1, int n2);

int main()
{

  int n1;
  int n2;
  int funcao;

  printf("Digite 2 numeros inteiros positivos e receba a soma dos numeros entre eles:\n");
  scanf("%d%d", &n1, &n2);

  funcao = numeros(n1, n2);

  printf("O valor da soma dos inteiroe entre os numero: %d\n", funcao);

  return 0;
}