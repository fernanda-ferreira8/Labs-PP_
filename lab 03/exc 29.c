#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int x;
  int y;
  int operacao;
  int resultado;

  x = rand() % 50;
  y = rand() % 49;

  printf("%d + %d = \n", x, y);
  scanf("%d", &resultado);

  operacao = x + y;

  if (operacao == resultado)
  {
    printf("A resposta esta correta\n");
  }
  else
  {
    printf("A resposta esta errada\n");
  }

  return 0;
}