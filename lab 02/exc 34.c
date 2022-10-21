/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é  *raio2, considere  = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float raio_circulo;
  float area_circulo;

  printf("Digite um valor de raio de um circulo aqui: \n");
  scanf("%f", &raio_circulo);

  area_circulo = 3.141592 * (raio_circulo * raio_circulo);
  printf("A area encontrada do circulo foi: %0.2f \n", area_circulo);

  return 0;
}
