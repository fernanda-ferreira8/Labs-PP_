/*09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Celsius;
  float Kelvin;

  printf("Digite uma temperatura em Celsius aqui: \n");
  scanf("%f", &Celsius);
  Kelvin = Celsius + 273.15;
  printf("O valor encontrado em Kelvin foi: %0.2f", Kelvin);

  return 0;
}