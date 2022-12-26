/*3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do
 * usuário a informação de 5 alunos, armazene em um vetor dessa estrutura e
 * imprima os dados na tela.*/

#include <stdio.h>

struct aluno
{
  char nome[50], matricula[20], curso[50];
};

typedef struct aluno aluno;

int main()
{

  aluno a[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome aqui: ");
    fflush(stdin);
    fgets(a[i].nome, 50, stdin);

    printf("Digite o numero de matricula: ");
    fflush(stdin);
    fgets(a[i].matricula, 20, stdin);

    printf("Digite o nome do curso: ");
    fflush(stdin);
    fgets(a[i].curso, 50, stdin);
    printf("\n");
  }
  for (i = 0; i < 5; i++)
  {
    printf("Os dados encontrados foram:\n Nome: %s\n Matricula: %s\n Curso: %s\n", a[i].nome, a[i].matricula, a[i].curso);
  }

  return 0;
}