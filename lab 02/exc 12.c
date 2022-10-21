/*12. Leia uma distância em milhas e apresente-a convertida em quilômetro */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Distancia_Milhas;
  float Distancia_Km;

  printf("Digite uma distancia em milhas: \n");
  scanf("%f", &Distancia_Milhas);
  Distancia_Km = 1.61 * Distancia_Milhas;
  printf("A distancia encontrada em Km foi: %0.2f \n", Distancia_Km);

  return 0;
}