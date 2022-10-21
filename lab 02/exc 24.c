/*24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
acres.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Area_metros2;
  float Area_acres;

  printf("Digite um valor de area em metros quadrados aqui: \n");
  scanf("%f", &Area_metros2);
  Area_acres = Area_metros2 * 0.000247;
  printf("O valor de area encontrado em acres foi: %0.2f \n", Area_acres);

  return 0;
}