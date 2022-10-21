/*42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float salario_base;
  float gratificacao;
  float imposto;
  float salarioa_receber;

  printf("Digite o valor do salario base aqui: \n");
  scanf("%f", &salario_base);

  gratificacao = salario_base + (salario_base * 0.05);
  imposto = gratificacao - (gratificacao * 0.07);
  salarioa_receber = imposto; // A variável "imposto" recebe o valor total do salário com a gratificação e com o desconto aplicados.
  printf("O salario a receber e: %0.2f \n", salarioa_receber);

  return 0;
}