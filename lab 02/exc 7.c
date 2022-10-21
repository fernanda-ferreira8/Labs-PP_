/*07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = 5.0(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
temperatura em Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Celsius;
  float Fahrenheit;

  printf("Digite uma temperatura em Fahrenheit aqui: \n");
  scanf("%f", &Fahrenheit);
  Celsius = 5.0 * (Fahrenheit - 32.0) / 9.0;
  printf("O valor encontrado em Celsius foi: %0.2f \n", Celsius);

  return 0;
}
