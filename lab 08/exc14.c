/*14. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
     Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
     Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.*/

#include <stdio.h>
#include <string.h>

struct voo
{
  int origem;
  int destino;
};

typedef struct voo voo;

struct aeroporto
{
  int codigo;
  int quantVS;
  int quantVC;
};

typedef struct aeroporto aeroporto;

int main()
{
  voo v[5];
  aeroporto a[5];
  int V = 5, A = 5, i, j;

  for (i = 0; i < 5; i++)
  {
    do
    {
      printf("Digite o codigo de origem do voo(0 a 4) aqui: \n");
      scanf("%d", &v[i].origem);
      fflush(stdin);

      printf("Digite o codigo de destino do voo(0 a 4) aqui: \n");
      scanf("%d", &v[i].destino);
      fflush(stdin);

      printf("\n");
    } while (v[i].origem >= A || v[i].origem < 0 || v[i].destino >= A || v[i].destino < 0);
  }

  for (i = 0; i < 5; i++)
  {
    do
    {
      printf("Digite o codigo do aeroporto(0 a 4) aqui: \n");
      scanf("%d", &a[i].codigo);
      fflush(stdin);

      printf("Quantidade de voos que saem do aeroporto: \n");
      scanf("%d", &a[i].quantVS);
      fflush(stdin);

      printf("Quantidade de voos que chegam no aeroporto: \n");
      scanf("%d", &a[i].quantVC);
      fflush(stdin);
      printf("\n");

    } while (a[i].codigo >= A || a[i].codigo < 0);
  }

  return 0;
}