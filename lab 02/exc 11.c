/*11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
M em m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Velocidade_Ms;
  float Velocidade_KmH;

  printf("Digite uma velocidade em m/s aqui: \n");
  scanf("%f", &Velocidade_Ms);
  Velocidade_KmH = Velocidade_Ms * 3.6;
  printf("O valor encontrado em Km/h foi: %0.2f \n", Velocidade_KmH);

  return 0;
}