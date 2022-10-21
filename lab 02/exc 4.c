/*04. Leia um número real e imprima o resultado do quadrado desse número. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

  double num, numQuadrado;

  printf("Digite um numero real aqui: \n");
  scanf("%lf", &num);
  numQuadrado = pow(num, 2);
  printf("O quadrado do valor encontrado foi: %0.1lf\n", numQuadrado);

  return 0;
}