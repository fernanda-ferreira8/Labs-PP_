/*8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/

#include <stdio.h>

int main()
{
  int A[2][2];
  int i;
  int j;
  int B[2][2];
  int k;
  int l;
  int op;
  int x;
  int s;

  printf("Matriz 1:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Digite o valor: Linha (%d) Coluna (%d): ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("Matriz 2:\n");
  for (k = 0; k < 2; k++)
  {
    for (l = 0; l < 2; l++)
    {
      printf("Digite o valor: Linha (%d) Coluna (%d): ", k, l);
      scanf("%d", &B[k][l]);
    }
  }

  do
  {
    printf("---Menu de Operacoes ---\n");
    printf("(1)Adicao de duas matrizes\n");
    printf("(2)Subtrair a primeira matriz da segunda\n");
    printf("(3)Adicionar uma constante as matrizes\n");
    printf("(4)Imprimir as matrizes\n");
    printf("(5)Sair\n");
    printf("Digite o numero da operacao desejada aqui: ");
    scanf("%d", &op);

    switch (op)
    {
    case (1):
      printf("Matriz Soma\n");
      for (i = 0; i < 2; i++)
      {
        k = i;
        for (j = 0; j < 2; j++)
        {
          l = j;
          s = A[i][j] + B[k][l];
          printf("%d ", s);
        }
        printf("\n");
      }
      break;

    // Subtracao das matrizes
    case (2):
      printf("Matriz Subtracao\n");
      for (i = 0; i < 2; i++)
      {
        k = i;
        for (j = 0; j < 2; j++)
        {
          l = j;
          s = A[i][j] - B[k][l];
          printf("%d ", s);
        }
        printf("\n");
      }
      break;

    // Adicao da constante
    case (3):
      printf("Digite um numero para multiplicar as matrizes aqui: ");
      scanf("%d", &x);
      for (i = 0; i < 2; i++)
      {
        for (j = 0; j < 2; j++)
        {
          A[i][j] = (A[i][j]) * x;
        }
      }
      for (k = 0; k < 2; k++)
      {
        for (l = 0; l < 2; l++)
        {
          B[k][l] = (B[k][l]) * x;
        }
      }
      break;

    // Impressao das matrizes
    case (4):
      printf("---Matriz 1---\n");
      for (i = 0; i < 2; i++)
      {
        for (j = 0; j < 2; j++)
        {
          printf("%d ", A[i][j]);
        }
        printf("\n");
      }
      printf("--------------\n");
      printf("---Matriz 2---\n");
      for (k = 0; k < 2; k++)
      {
        for (l = 0; l < 2; l++)
        {
          printf("%d ", B[k][l]);
        }
        printf("\n");
      }
      printf("--------------\n");
      break;
    }

  } while (op != 5);
  return 0;
}