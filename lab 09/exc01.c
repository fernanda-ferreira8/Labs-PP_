
/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros
 * para inteiro, real e char. Associe as variáveis aos ponteiros (use &).
 * Modifique os valores de cada variável usando os ponteiros. Imprima os valores
 * das variáveis antes e após a modificação. */

#include <stdio.h>

int main() {

  int num = 0, *p_num;
  float real = 0, *p_real;
  char variavel = 'a', *p_variavel;

  p_num = &num;
  p_real = &real;
  p_variavel = &variavel;

  printf("Os valores encontrados antes da mudanca foram:\n");

  printf("num = %d\n", num);
  printf("real = %0.2f\n", real);
  printf("char = %c\n", variavel);

  *p_num = 1;
  *p_real = 2;
  *p_variavel = 'f';

  printf("Os valores encontrados apos a mudanca foram:\n");
  printf("num = %d\n", num);
  printf("real = %0.2f\n", real);
  printf("char = %c\n", variavel);

  return 0;
}
