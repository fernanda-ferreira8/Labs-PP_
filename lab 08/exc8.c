/*8. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe e seu valor). Implemente a parte de distribuição (sorteio) de cartas
para 2 jogadores, considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos jogadores recebeu. */

#include <stdio.h>
#include <string.h>

struct cartas
{
  char *naipe;
  char *valor;
};

int main()
{
  struct cartas c[6];
  int i, j, k;

  for (i = 0; i < 6; i++)
  {
    j = rand() % 3;
    switch (j)
    {
    case 0:
      c[i].naipe = "Copas";
      break;
    case 1:
      c[i].naipe = "Espadas";
      break;
    case 2:
      c[i].naipe = "Ouro";
      break;
    case 3:
      c[i].naipe = "Paus";
      break;
    }
    k = rand() % 13;
    switch (k)
    {
    case 0:
      c[i].valor = "As";
      break;
    case 1:
      c[i].valor = "1";
      break;
    case 2:
      c[i].valor = "2";
      break;
    case 3:
      c[i].valor = "3";
      break;
    case 4:
      c[i].valor = "4";
      break;
    case 5:
      c[i].valor = "5";
      break;
    case 6:
      c[i].valor = "6";
      break;
    case 7:
      c[i].valor = "7";
      break;
    case 8:
      c[i].valor = "8";
      break;
    case 9:
      c[i].valor = "9";
      break;
    case 10:
      c[i].valor = "10";
      break;
    case 11:
      c[i].valor = "Valete";
      break;
    case 12:
      c[i].valor = "Dama";
      break;
    case 13:
      c[i].valor = "Rei";
      break;
    }
    fflush(stdin);
  }

  printf("Cartas JOGADOR 1: \n");
  for (i = 0; i < 3; i++)
  {
    printf("carta %d: \n", i + 1);
    for (j = 0; c[i].naipe[j] != '\0'; j++)
    {
      printf("%c", c[i].naipe[j]);
    }
    printf("\n");
    for (j = 0; c[i].valor[j] != '\0'; j++)
    {
      printf("%c", c[i].valor[j]);
    }
    printf("\n");
  }
  printf("Cartas JOGADOR 2: \n");
  for (i = 3; i < 6; i++)
  {
    printf("carta %d: \n", i - 2);
    for (j = 0; c[i].naipe[j] != '\0'; j++)
    {
      printf("%c", c[i].naipe[j]);
    }
    printf("\n");
    for (j = 0; c[i].valor[j] != '\0'; j++)
    {
      printf("%c", c[i].valor[j]);
    }
    printf("\n");
  }

  return 0;
}