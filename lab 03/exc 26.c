/* Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float media;
  float km;
  float l;
  printf("Digite a quantidade de km aqui: \n");
  scanf("%f", &km);

  printf("Escreva a quantidade de litros aqui: \n");
  scanf("%f", &l);

  media = km / l;

  if (media < 8)
  {
    printf("Venda o carro!\n");
  }

  if (media >= 8 && media <= 14)
  {
    printf("Economico!\n");
  }

  if (media > 14)
  {
    printf("Super economico!\n");
  }
  return 0;
}