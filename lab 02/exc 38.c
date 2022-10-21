/*38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario_inicial;
  float salario_final;

  printf("Digite o valor do salario inicial aqui: \n");
  scanf("%f", &salario_inicial);

  salario_final = salario_inicial + (salario_inicial * 0.25);
  printf("O valor do novo salario eh de: %0.2f \n", salario_final);

  return 0;
}