/*15. Faça um programa para armazenar um livro de receitas e:
     Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
ingredientes e ingredientes;
     Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor
de ingredientes, sendo que cada ingrediente contém nome e quantidade;
     Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar,
informe ao usuário. Repita o processo até digitar uma string vazia.*/

#include <stdio.h>
#include <string.h>

struct ingrediente
{
  char nome[25];
  int quantidade;
};

typedef struct ingrediente ingrediente;

struct receita
{
  char nome[25];
  int quantidade;
  ingrediente ing[25];
};

typedef struct receita receita;

int main()
{
  receita recepie[5];
  int i, j;
  int quantING[5], l, m;
  char busca[25];

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome da receita %d aqui:\n", i + 1);
    fgets(recepie[i].nome, 25, stdin);
    fflush(stdin);

    printf("Digite a quantidade de ingredientes que tem na receita %d aqui:\n", i + 1);
    scanf("%d", &recepie[i].quantidade);
    fflush(stdin);
    quantING[i] = recepie[i].quantidade;
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < quantING[i]; j++)
    {
      printf("Digite o(s) nome(s) do(s) ingrediente(s) da receita %d aqui: \n", i + 1);
      fgets(recepie[i].ing[j].nome, 15, stdin);
      fflush(stdin);

      printf("Digite a quantidade de ingrediente(s) existentes na receita %d aqui: \n", j + 1);
      scanf("%d", &recepie[i].ing[j].quantidade);
      fflush(stdin);
    }
  }

  do
  {
    printf("Digite o nome da receita que deseja buscar aqui: \n");
    fgets(busca, 25, stdin);
    fflush(stdin);

    for (i = 0; i < 5; i++)
    {
      l = 0;
      for (j = 0; busca[j] != '\0'; j++)
      {
        if (busca[j] != recepie[i].nome[j])
        {
          l = 1;
        }
      }
      if (l == 0)
      {
        printf("Os ingredientes que tem na receita sao %d: \n", i + 1);
        for (j = 0; j < quantING[i]; j++)
        {
          for (m = 0; recepie[i].ing[j].nome[m] != '\0'; m++)
          {
            printf("%c", recepie[i].ing[j].nome[m]);
          }
        }
      }
    }
  } while (busca[0] != ' ');

  return 0;
}