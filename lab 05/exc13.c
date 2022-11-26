/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
será efetuada uma divisão*/

#include <stdio.h>

int operacao(char op, float n1, float n2);

int main()
{

  float n1;
  float n2;
  int funcao;
  char op;

  printf("+ soma\n");
  printf("- subtracao\n");
  printf("* multiplicacao\n");

  printf("/ divisao\n");
  scanf("%c", &op);

  printf("Escreva 2 para fazer uma operacao:\n");
  scanf("%f%f", &n1, &n2);

  funcao = operacao(op, n1, n2);

  return 0;
}

int operacao(char op, float n1, float n2)
{

  float resultado;

  if (op == '+')
  {
    resultado = n1 + n2;
    printf("%.2f", resultado);
  }
  if (op == '-')
  {
    resultado = n1 - n2;
    printf("%.2f", resultado);
  }
  if (op == '*')
  {
    resultado = n1 * n2;
    printf("%.2f", resultado);
  }
  if (op == '/')
  {
    resultado = n1 / n2;
    printf("%.4f", resultado);
  }
  return 0;
}