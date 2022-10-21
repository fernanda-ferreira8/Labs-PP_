/*18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros
cúbicos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Volume_m3;
  float Volume_Litros;

  printf("Digite um valor de volume em metros cubicos aqui: \n");
  scanf("%f", &Volume_m3);
  Volume_Litros = 1000 * Volume_m3;
  printf("O valor de volume encontrado em litros foi: %0.2f \n", Volume_Litros);

  return 0;
}