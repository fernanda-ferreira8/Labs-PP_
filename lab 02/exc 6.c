/*06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
formula de conversão é: F = C(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float celsius;
  float fahrenheit;

  printf("Digite uma temperatura em Celsius: \n");
  scanf("%f", &celsius);
  fahrenheit = celsius * (9.0 / 5.0) + 32.0;
  printf("Valor em Fahrenheit: %0.2f \n", fahrenheit);

  return 0;
}