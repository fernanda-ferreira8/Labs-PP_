/*27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2
. A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float Area_metros2;
  float Area_hec;

  printf("Digite um valor de area em hectares aqui: \n");
  scanf("%f", &Area_hec);
  Area_metros2 = Area_hec * 10000;
  printf("O valor de area encontrado em metros quadrados foi: %0.2f \n", Area_metros2);

  return 0;
}