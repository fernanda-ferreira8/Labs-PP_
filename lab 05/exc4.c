/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9...*/

#include <stdio.h>
#include <math.h>

int VerificaoDeQuadrado(int numero);

int main()
{
  int n, funcao;
  printf("Digite um numero aqui:\n");
  scanf("%d", &n);
  funcao = VerificaoDeQuadrado(n);

  return 0;
}
int VerificaoDeQuadrado(int numero)
{

  int raiz;

  if (numero <= 0)
  {
    printf("O numero escolhido nao eh um quadrado perfeito\n");
  }

  raiz = sqrt(numero);

  if (raiz * raiz == numero)
  {
    printf("O numero escolhido eh um quadrado perfeito\n");
  }
  else
  {
    printf("O numero escolhido nao eh um quadrado perfeito\n");
  }

  return 0;
}
