/*18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario = 2000;
  double aumento = 0.015;
  int ano = 1995;

  while (ano < 2023)
  {
    salario += salario * aumento;
    aumento *= 2;
    ano++;

    printf("%0.2f\n", aumento);
  }
  printf("Salario no ano %d: %lf\n", ano, salario);
  return 0;
}