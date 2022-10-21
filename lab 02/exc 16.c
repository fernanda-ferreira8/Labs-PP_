/*16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Comprimento_pol;
  float Comprimento_cm;

  printf("Digite um valor em polegadas aqui: \n");
  scanf("%f", &Comprimento_pol);
  Comprimento_cm = Comprimento_pol * 2.54;
  printf("O valor encontrado em centimetros foi: %0.2f \n", Comprimento_cm);

  return 0;
}