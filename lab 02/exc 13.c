/*13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Distancia_Milhas;
  float Distancia_Km;

  printf("Digite uma distancia em Km aqui: \n");
  scanf("%f", &Distancia_Km);
  Distancia_Milhas = Distancia_Km / 1.61;
  printf("O valor encontrado em milhas foi: %0.2f \n", Distancia_Milhas);

  return 0;
}