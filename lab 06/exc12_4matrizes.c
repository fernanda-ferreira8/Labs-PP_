/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”*/

#include <stdio.h>

int main()
{
  int n[5][5];
  int bolean = 0;
  int i; 
  int j;
  int x; 


  printf("Digite um valor para ser encontrado na matriz 5 x 5: ");
  scanf("%d", &x);

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("Digite um numero (Linha %d Coluna %d):", i, j);
      scanf("%d", &n[i][j]);
    }
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (x == n[i][j])
      {
        printf("O valor x eh encontrado em: Linha %d Coluna %d\n", i, j);
        bolean = 1;
      }
    }
  }
  if (bolean == 0)
  {
    printf("O valor x nao foi encontrado na matriz\n");
  }

  return 0;
}