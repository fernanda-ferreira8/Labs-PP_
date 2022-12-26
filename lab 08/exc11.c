/*11. Faça um programa que seja uma agenda de compromissos e:
        Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
        Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler M = 0. */

#include <stdio.h>
#include <string.h>

struct data
{
  int dia;
  int mes;
  int ano;
};

typedef struct data data;

struct agenda
{
  char compromisso[60];
  data dataC;
};

typedef struct agenda agenda;

int main()
{
  agenda vetor[5];
  int i;
  int mes, ano;

  do
  {
    for (i = 0; i < 5; i++)
    {
      printf("Digite o compromisso aqui: ");
      fgets(vetor[i].compromisso, 60, stdin);
      fflush(stdin);

      printf("Digite o dia aqui: ");
      scanf("%d", &vetor[i].dataC.dia);
      fflush(stdin);

      printf("Digite o mes aqui: ");
      scanf("%d", &vetor[i].dataC.mes);
      fflush(stdin);

      printf("Digite e o ano aqui: ");
      scanf("%d", &vetor[i].dataC.ano);
      fflush(stdin);
      printf("\n");
    }

    printf("Digite o mes pra busca aqui: ");
    scanf("%d", &mes);
    fflush(stdin);

    printf("Digite o ano pra busca aqui: ");
    scanf("%d", &ano);
    fflush(stdin);
    printf("\n");

    printf("Compromissos do mes %d e ano %d:\n\n", mes, ano);

    for (i = 0; i < 5; i++)
    {
      if (vetor[i].dataC.mes == mes && vetor[i].dataC.ano == ano)
      {
        printf("Compromisso: %sData: %d/%d/%d\n\n", vetor[i].compromisso, vetor[i].dataC.dia, vetor[i].dataC.mes, vetor[i].dataC.ano);
      }
    }

  } while (mes != 0);

  return 0;
}