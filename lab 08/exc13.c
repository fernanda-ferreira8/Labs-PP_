/*13. Faça um programa que gerencie o estoque de um mercado e:
     Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15
letras), preço e quantidade;
     Leia um pedido, composto por um código de produto e a quantidade. Localize este
código no vetor e, se houver quantidade suficiente para atender ao pedido
integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um
código igual a zero.
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem
informando qual erro ocorreu.*/

#include <stdio.h>
#include <string.h>

struct dados
{
  int codigo;
  char nome[15];
  float preco;
  int quantidade;
};

typedef struct dados dados;

int main()
{
  dados estoque[5];
  int codigo1, quantidade1, i, j;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o codigo do produto aqui: \n");
    scanf("%d", &estoque[i].codigo);
    fflush(stdin);

    printf("Digite o nome do produto aqui: \n");
    fgets(estoque[i].nome, 15, stdin);
    fflush(stdin);

    printf("Digite o preco do produto aqui: \n");
    scanf("%f", &estoque[i].preco);
    fflush(stdin);

    printf("Digite a quantidade do produto aqui: \n");
    scanf("%d", &estoque[i].quantidade);
    fflush(stdin);
  }

  do
  {
    printf("Digite o codigo do produto e a quantidade a ser comprada aqui: \n");
    scanf("%d %d", &codigo1, &quantidade1);
    fflush(stdin);

    for (i = 0; i < 5; i++)
    {
      if (estoque[i].codigo == codigo1)
      {
        if (estoque[i].quantidade >= quantidade1)
        {
          printf("Pedido feito!\n");
          estoque[i].quantidade -= quantidade1;
          printf("Produto: ");
          for (j = 0; estoque[i].nome[j] != '\0'; j++)
          {
            printf("%c", estoque[i].nome[j]);
          }
          printf("Codigo: %d\n", codigo1);
          printf("Preco: %.2f\n", quantidade1 * estoque[i].preco);
          printf("Quantidade: %d\n", quantidade1);
          return 0;
        }
        else
        {
          printf("Estoque insuficiente. O pedido foi cancelado!\n");
          return 0;
        }
      }
    }
  } while (codigo1 != 0);

  return 0;
}