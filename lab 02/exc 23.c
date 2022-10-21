/*23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Comprimento_jardas;
  float Comprimento_metros;

  printf("Digite um valor de comprimento em metros aqui: \n");
  scanf("%f", &Comprimento_metros);
  Comprimento_jardas = Comprimento_metros / 0.91;
  printf("O valor de comprimento encontrado em jardas foi: %f \n ", Comprimento_jardas);

  return 0;
}