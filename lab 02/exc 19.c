/*19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
cúbicos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Volume_m3;
  float Volume_Litros;

  printf("Digite um valor de volume em litros aqui: \n");
  scanf("%f", &Volume_Litros);
  Volume_m3 = Volume_Litros / 1000;
  printf("O valor de volume encontrado em metros cubicos foi: %f \n", Volume_m3);

  return 0;
}