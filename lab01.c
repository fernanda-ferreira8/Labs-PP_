#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
  int i = 1;
  int f = 1;

  for (i = 1; i <= n; i++)
    f = f * i;
  return f;
}

int main()
{
  int x, y;

  printf("Digite um valor inteiro: ");
  scanf("%d", &x);

  if (x > 0)
  {

    printf("X e positivo\n");
    y = fatorial(x);
    printf("Fatorial de x eh %d/n", y);
  }
  else
  {
    if (x < 0)
      printf("X e negativo\n");
    else
      printf("X e zero\n");
  }
  printf("Fim do programa!\n");
  system("pause");

  return 0;
}
