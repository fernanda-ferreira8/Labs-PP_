/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
sinais de igual serão mostrados*/

#include <stdio.h>

int desenha_linha(int n);

int main()
{

  int n;
  int funcao;

  printf("Digite a quantidade de simbolos na linha:\n");
  scanf("%d", &n);

  funcao = desenha_linha(n);

  return 0;
}
int desenha_linha(int n)
{

  int i;
  if (n < 0)
  {
    return 0;
  }
  for (i = 1; i <= n; i++)
  {
    printf("=");
  }

  return 0;
}