/*14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 14 Super econômico!*/

#include <stdio.h>

int consumo(float km, float l);

int main()
{

  float km;
  float l;
  int funcao;

  printf("Digite a quilometragem aqui:\n");
  scanf("%f", &km);

  printf("Digite quantos litros de gasolina foram consumidos aqui:\n");
  scanf("%f", &l);

  funcao = consumo(km, l);

  return 0;
}
int consumo(float km, float l)
{

  float media;
  media = km / l;

  if (media < 8)
  {
    printf("Venda o carro!\n");
  }
  if (media >= 8 && media <= 14)
  {
    printf("Economico\n");
  }
  if (media > 14)
  {
    printf("Super economico\n");
  }

  return 0;
}