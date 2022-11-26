/*15. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo
que:
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

#include <stdio.h>

int triangulo(float l1, float l2, float l3);

int main()
{

  float l1, l2, l3;
  int funcao;
  printf("Escreva os 3 lados:\n");
  scanf("%f%f%f", &l1, &l2, &l3);

  funcao = triangulo(l1, l2, l3);

  return 0;
}
int triangulo(float l1, float l2, float l3)
{

  if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2)
  {
    if (l1 == l2 && l2 == l3)
    {
      printf("O triangulo eh equilatero.\n");
      return 0;
    }
    if (l1 == l2 || l2 == l3 || l1 == l3)
    {
      printf("O triangulo eh isoceles.\n");
    }
    if (l1 != l2 && l2 != l3)
    {
      printf("O triangulo eh escaleno.\n");
    }
  }

  else
  {
    printf("Os lados escolhidos nao formam um triangulo.\n");
  }

  return 0;
}