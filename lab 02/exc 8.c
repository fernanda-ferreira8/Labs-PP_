/*08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Kelvin;
  float Celsius;

  printf("Digite uma temperatura em Kelvin aqui: \n");
  scanf("%f", &Kelvin);
  Celsius = Kelvin - 273.15;
  printf("O valor encontrado em Celsius foi: %0.2f \n", Celsius);

  return 0;
}