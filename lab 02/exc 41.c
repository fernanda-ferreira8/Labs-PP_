/* 41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.*/

#include <stdio.h>

int main()
{

  float valor_hora;
  float num_horasTrabalhadas;
  float valor_salario;

  printf("Digite o valor da hora: \n");
  scanf("%f", &valor_hora);

  printf("Digite o numero de horas trabalhadas no mes: \n");
  scanf("%f", &num_horasTrabalhadas);

  valor_salario = (valor_hora * num_horasTrabalhadas) + (valor_salario * 0.1);
  printf("O valor a ser pago ao funcionario e: %0.2f", valor_salario);

  return 0;
}