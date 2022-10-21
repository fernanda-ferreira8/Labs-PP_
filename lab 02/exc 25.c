/*25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2
. A fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em acres*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Area_metros2;
  float Area_acres;

  printf("Digite um valor de area em acres aqui: \n");
  scanf("%f", &Area_acres);
  Area_metros2 = Area_acres * 4048.58;
  printf("o valor de area encontrado em metros quadrados foi: %f \n", Area_metros2);

  return 0;
}