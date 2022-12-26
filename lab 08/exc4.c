/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/

#include <stdio.h>
#include <string.h>
#define MAX 5

struct aluno
{
  char matricula[20], nome[50];
  float nota_p1, nota_p2, nota_p3;
};

typedef struct aluno Aluno;

int main()
{

  Aluno a[MAX];
  int i;
  int posicao;
  float maior_media;
  float menor_media;

  // a) Dados dos 5 alunos

  for (i = 0; i < MAX; i++)
  {

    printf("Digite o nome do aluno aqui: ");
    fgets(a[i].nome, 50, stdin);
    setbuf(stdin, NULL);

    printf("Digite o nome da matricula aqui: ");
    fgets(a[i].matricula, 20, stdin);
    setbuf(stdin, NULL);

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &a[i].nota_p1);
    setbuf(stdin, NULL);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &a[i].nota_p2);
    setbuf(stdin, NULL);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &a[i].nota_p3);
    setbuf(stdin, NULL);
    printf("\n");
  }
  // b) Maior nota da primeira prova

  posicao = 0;

  for (i = 1; i < MAX; i++)
  {

    if (a[i].nota_p1 > a[posicao].nota_p1)
    {
      posicao = i;
    }
  }
  printf("O aluno com a maior nota foi %s com a nota %.2f!\n", a[posicao].nome, a[posicao].nota_p1);

  // Media das notas

  // media_geral = (a[i].nota_p1 + a[i].nota_p2 + a[i].nota_p3)/3;

  // c) Maior media geral

  maior_media = (a[0].nota_p1 + a[0].nota_p2 + a[0].nota_p3) / 3;
  posicao = 0;

  for (i = 1; i < MAX; i++)
  {
    if (maior_media < (a[i].nota_p1 + a[i].nota_p2 + a[i].nota_p3) / 3)
    {
      maior_media = (a[i].nota_p1 + a[i].nota_p2 + a[i].nota_p3) / 3;
      posicao = i;
    }
  }
  printf("O aluno com maior media eh %s!\n", a[posicao].nome);

  // d)Menor media geral

  menor_media = (a[0].nota_p1 + a[0].nota_p2 + a[0].nota_p3) / 3;
  posicao = 0;

  for (i = 1; i < MAX; i++)
  {
    if (menor_media > (a[i].nota_p1 + a[i].nota_p2 + a[i].nota_p3) / 3)
    {
      menor_media = (a[i].nota_p1 + a[i].nota_p2 + a[i].nota_p3) / 3;
      posicao = i;
    }
  }
  printf("O aluno com menor media eh %s!\n", a[posicao].nome);

  // e)Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação

  for (i = 0; i < MAX; i++)
  {
    printf("%.100s\t", a[i].nome);
    if (((a[i].nota_p1 + a[i].nota_p2 + a[i].nota_p3) / 3) >= 6)
    {
      printf("APROVADO! :)\n");
    }
    else
    {
      printf("REPROVADO! :(\n");
    }
  }
  return 0;
}