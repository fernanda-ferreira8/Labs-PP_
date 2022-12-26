/*16. Faça um programa que armazena filmes produzidos por vários diretores e:
     Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras),
quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após
ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
     Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o
processo até digitar uma string vazia.*/

#include <stdio.h>
#include <string.h>

struct filme
{
  char nome[20];
  int ano;
  int duracao;
};

typedef struct filme filme;

struct diretor
{
  char nome[20];
  int quantidade;
  filme *filmes;
};

typedef struct diretor diretor;

int main()
{
  diretor diretores[5];
  int i, j;
  char nome[20];

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do diretor aqui: ");
    fgets(diretores[i].nome, 20, stdin);
    fflush(stdin);

    printf("Digite a quantidade de filmes aqui: ");
    scanf("%d", &diretores[i].quantidade);
    fflush(stdin);

    diretores[i].filmes = (filme *)malloc(diretores[i].quantidade * sizeof(filme));
    for (j = 0; j < diretores[i].quantidade; j++)
    {
      printf("Digite o nome do filme aqui: ");
      fgets(diretores[i].filmes[j].nome, 20, stdin);
      fflush(stdin);

      printf("Digite o ano do filme aqui: ");
      scanf("%d", &diretores[i].filmes[j].ano);
      fflush(stdin);

      printf("Digite a duracao do filme aqui: ");
      scanf("%d", &diretores[i].filmes[j].duracao);
      fflush(stdin);
    }
  }

  printf("\n\n");

  while (1)
  {
    printf("Digite o nome do diretor aqui: ");
    fgets(nome, 20, stdin);
    fflush(stdin);
    if (strcmp(nome, "\n") == 0)
    {
      break;
    }
    for (i = 0; i < 5; i++)
    {
      if (strcmp(diretores[i].nome, nome) == 0)
      {
        for (j = 0; j < diretores[i].quantidade; j++)
        {
          printf("Nome: %s\nAno: %d\nDuracao: %d\n\n", diretores[i].filmes[j].nome, diretores[i].filmes[j].ano, diretores[i].filmes[j].duracao);
        }
      }
    }
  }

  return 0;
}
