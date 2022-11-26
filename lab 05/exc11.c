/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2.*/

#include <stdio.h>

int media(char operacao, float n1, float n2, float n3);

int main()
{

  float n1;
  float n2;
  float n3;
  char operacao;
  int funcao;

  printf("A- para media simples.\n P- para media ponderada.\n");
  scanf("%c", &operacao);

  printf("Digite as 3 notas aqui:\n");
  scanf("%f %f %f", &n1, &n2, &n3);

  funcao = media(operacao, n1, n2, n3);

  return 0;
}
int media(char operacao, float n1, float n2, float n3)
{

  float resultado;

  if (operacao == 'A' || operacao == 'a')
  {
    resultado = (n1 + n2 + n3) / 3;
    printf("%.2f", resultado);
  }

  if (operacao == 'P' || operacao == 'p')
  {
    resultado = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    printf("%.2f", resultado);
  }

  else
  {
    printf("A opcao escolhida eh invalida.\n");
  }
  return 0;
}
