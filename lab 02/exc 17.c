/*17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Comprimento_pol;
  float Comprimento_cm;

  printf("Digite um valor em centimetros aqui: \n");
  scanf("%f", &Comprimento_cm);
  Comprimento_pol = Comprimento_cm / 2.54;
  printf("o valor encontrado em polegadas foi: %0.2f \n", Comprimento_pol);

  return 0;
}