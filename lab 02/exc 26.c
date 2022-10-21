/*26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Area_metros2;
  float Area_hec;

  printf("Digite um valor de area em metros quadrados aqui: \n");
  scanf("%f", &Area_metros2);
  Area_hec = Area_metros2 * 0.0001;
  printf("O valor de area encontrado em hectares foi: %0.4f \n", Area_hec);

  return 0;
}