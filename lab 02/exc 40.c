/*40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador
e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda*/

#include <stdio.h>

int main()
{

  float dias;
  float salario_dia = 30.00;
  float valor_final;

  printf("Digite o numero de dias trabalhados: \n");
  scanf("%f", &dias);

  valor_final = (dias * salario_dia) * 0.92; // 0.92 equivale a ( 100% - 8% = 92%)
  printf("Valor a ser pago: %0.2f \n", valor_final);

  return 0;
}