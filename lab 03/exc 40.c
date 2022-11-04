/*
40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
CUSTO DE FÁBRICA                    % DO DISTRIBUIDOR               % DOS IMPOSTOS
até R$12.000,00                             5                           isento
entre R$12.000,00 e R$25.000,00             10                          15
acima de R$25.000,00                        15                          20
*/
#include <stdio.h>

int main()
{
  float custoFabrica = 0;
  float custoConsumidor = 0;
  float comissao = 0;
  float impostos = 0;

  printf("Digite o custo de fabrica do carro aqui: ");
  scanf("%f", &custoFabrica);

  if (custoFabrica <= 12000)
  {
    comissao = custoFabrica * 0.05;
    impostos = 0;
    custoConsumidor = custoFabrica + comissao + impostos;
    printf("O custo ao consumidor do carro e: %.2f", custoConsumidor);
  }

  else if (custoFabrica > 12000 && custoFabrica <= 25000)
  {
    comissao = custoFabrica * 0.10;
    impostos = custoFabrica * 0.15;
    custoConsumidor = custoFabrica + comissao + impostos;
    printf("O custo ao consumidor do carro e: %.2f", custoConsumidor);
  }
  else if (custoFabrica > 25000)
  {
    comissao = custoFabrica * 0.15;
    impostos = custoFabrica * 0.20;
    custoConsumidor = custoFabrica + comissao + impostos;
    printf("O custo ao consumidor do carro e: %.2f", custoConsumidor);
  }
  return 0;
}