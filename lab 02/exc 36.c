/*36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado
 por meio da seguinte fórmula: V =  * raio2 * altura, onde  = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float altura_cilindro;
  float raio_cilindro;
  float volume_cilindro;

  printf("Digite a altura do cilindro aqui: \n");
  scanf("%f", &altura_cilindro);

  printf("Digite o raio do cilindro aqui: \n");
  scanf("%f", &raio_cilindro);

  volume_cilindro = 3.141592 * (raio_cilindro * raio_cilindro) * altura_cilindro;
  printf("O volume do cilindro e: %0.2f \n", volume_cilindro);

  return 0;
}
