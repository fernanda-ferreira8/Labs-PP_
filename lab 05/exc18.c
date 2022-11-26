/*18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o
resultado de x
z para o programa principal. Atenção não utilize nenhuma função pronta de
exponenciação.*/

#include <stdio.h>

int valores(int x, int z);

int main()
{

  int x;
  int z;
  int funcao;

  printf("Digite um valor inteiro:\n");
  scanf("%d", &x);

  printf("Digite um expoente positivo:\n");
  scanf("%d", &z);

  funcao = valores(x, z);

  printf("O resultado da exponenciaçao eh: %d\n", funcao);

  return 0;
}
int valores(int x, int z)
{
  int i;
  int resultado = x;

  for (i = 1; i < z; i++)
  {
    resultado = resultado * x;
  }

  return resultado;
}
