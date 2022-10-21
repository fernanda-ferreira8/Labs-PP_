/*10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
em m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Velocidade_KmH;
  float Velocidade_Ms;

  printf("Digite uma velocidade em Km/h aqui: \n");
  scanf("%f", &Velocidade_KmH);
  Velocidade_Ms = Velocidade_KmH / 3.6;
  printf("O valor encontrado em m/s foi: %0.2f", Velocidade_Ms);

  return 0;
}