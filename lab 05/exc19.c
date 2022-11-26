/*19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.*/

#include <stdio.h>

int valores(int x);

int main()
{

  int x;
  int z;
  int funcao;

  printf("Escreva um valor para calcular seu fatorial:\n");
  scanf("%d", &x);

  funcao = valores(x);

  printf("O resultado do fatorial eh: %d\n", funcao);

  return 0;
}
int valores(int x)
{
  int i;
  int resultado = 1;

  for (i = 1; i <= x; x--)
  {

    resultado = resultado * (x);
  }

  return resultado;
}