/*22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Comprimento_jardas;
  float Comprimento_metros;

  printf("Digite um valor de comprimento em jardas aqui: \n");
  scanf("%f", &Comprimento_jardas);
  Comprimento_metros = 0.91 * Comprimento_jardas;
  printf("O valor de comprimento encontrado em metros foi: %0.2f \n", Comprimento_metros);

  return 0;
}