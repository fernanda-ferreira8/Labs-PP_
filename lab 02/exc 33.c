/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float lado_quadrado;
  float area;

  printf("Digite o valor do lado do quadrado aqui: \n");
  scanf("%f", &lado_quadrado);

  area = lado_quadrado * lado_quadrado;

  printf("A area desse quadrado e: %0.2f \n", area);

  return 0;
}
