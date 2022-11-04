/*39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
 o valor do salário atual do funcionário;
 o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento.
Salário Atual                       Reajuste (%)                     Tempo de Serviço           Bônus
Até 500,00                              25%                          Abaixo de 1 ano            Sem bônus
Até 1000,00                             20%                          De 1 a 3 anos              100,00
Até 1500,00                             15%                          De 4 a 6 anos              200,00
Até 2000,00                             10%                          De 7 a 10 anos             300,00
Acima de 2000,00                    Sem reajuste                     Mais de 10 anos            500,00*/

#include <stdio.h>

int main()
{
  float salarioAtual;
  float tempoServico;
  float salarioReajustado;

  printf("Digite o salario atual do funcionario: ");
  scanf("%f", &salarioAtual);

  printf("Digite o tempo de servico do funcionario: ");
  scanf("%f", &tempoServico);

  if (salarioAtual <= 500)
  {
    salarioReajustado = salarioAtual * 1.25;

    if (tempoServico < 1)
    {
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 1 && tempoServico <= 3)
    {
      salarioReajustado = salarioReajustado + 100;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 4 && tempoServico <= 6)
    {
      salarioReajustado = salarioReajustado + 200;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 7 && tempoServico <= 10)
    {
      salarioReajustado = salarioReajustado + 300;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico > 10)
    {
      salarioReajustado = salarioReajustado + 500;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
  }

  else if (salarioAtual > 500 && salarioAtual <= 1000)
  {
    salarioReajustado = salarioAtual * 1.20;

    if (tempoServico < 1)
    {
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 1 && tempoServico <= 3)
    {
      salarioReajustado = salarioReajustado + 100;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 4 && tempoServico <= 6)
    {
      salarioReajustado = salarioReajustado + 200;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 7 && tempoServico <= 10)
    {
      salarioReajustado = salarioReajustado + 300;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico > 10)
    {
      salarioReajustado = salarioReajustado + 500;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
  }

  else if (salarioAtual > 1000 && salarioAtual <= 1500)
  {
    salarioReajustado = salarioAtual * 1.15;

    if (tempoServico < 1)
    {
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 1 && tempoServico <= 3)
    {
      salarioReajustado = salarioReajustado + 100;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 4 && tempoServico <= 6)
    {
      salarioReajustado = salarioReajustado + 200;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 7 && tempoServico <= 10)
    {
      salarioReajustado = salarioReajustado + 300;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico > 10)
    {
      salarioReajustado = salarioReajustado + 500;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
  }

  else if (salarioAtual > 1500 && salarioAtual <= 2000)
  {
    salarioAtual = salarioAtual * 1.10;

    if (tempoServico < 1)
    {
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 1 && tempoServico <= 3)
    {
      salarioReajustado = salarioReajustado + 100;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 4 && tempoServico <= 6)
    {
      salarioReajustado = salarioReajustado + 200;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 7 && tempoServico <= 10)
    {
      salarioReajustado = salarioReajustado + 300;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico > 10)
    {
      salarioReajustado = salarioReajustado + 500;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
  }

  else if (salarioAtual > 2000)
  {
    salarioReajustado = salarioAtual;

    if (tempoServico < 1)
    {
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 1 && tempoServico <= 3)
    {
      salarioReajustado = salarioReajustado + 100;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 4 && tempoServico <= 6)
    {
      salarioReajustado = salarioReajustado + 200;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico >= 7 && tempoServico <= 10)
    {
      salarioReajustado = salarioReajustado + 300;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
    else if (tempoServico > 10)
    {
      salarioReajustado = salarioReajustado + 500;
      printf("Salario reajustado: %.2f", salarioReajustado);
    }
  }
  return 0;
}