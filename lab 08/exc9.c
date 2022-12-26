/*9. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço. Leia um valor p e
mostre as informações de todos os carros com preço menor que p. Repita este processo até que seja lido um valor p = 0. */

#include <stdio.h>
#include <string.h>

struct dados
{
  char marca[15];
  int ano;
  float preco;
};

typedef struct dados dados;

int main()
{
  dados carro[5];
  float p;
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Digite a marca do carro aqui: ");
    fgets(carro[i].marca, 15, stdin);
    fflush(stdin);

    printf("Digite o ano do carro aqui: ");
    scanf("%d", &carro[i].ano);
    fflush(stdin);

    printf("Digite o preco do carro aqui: ");
    scanf("%f", &carro[i].preco);
    fflush(stdin);
    printf("\n");
  }

  do
  {
    printf("Entre com um valor aqui: ");
    scanf("%f", &p);
    if (carro[i].preco <= p)
    {
      for (i = 0; i < 5; i++)
      {
        if (carro[i].preco <= p)
        {
          printf("\n\nMarca: %s\nAno: %d\nPreco: %0.2f", carro[i].marca, carro[i].ano, carro[i].preco);
        }
      }
    }

  } while (p == 0);
  return 0;
}