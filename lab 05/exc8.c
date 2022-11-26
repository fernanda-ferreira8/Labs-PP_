/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎 2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação.*/

#include <stdio.h>
#include <math.h>

int hipotenusa(float a, float b);

int main()
{

  float a;
  float b;
  int funcao;

  printf("Digite os valores dos catetos aqui:\n");
  scanf("%f%f", &a, &b);

  funcao = hipotenusa(a, b);

  return 0;
}
int hipotenusa(float a, float b)
{

  float h;
  h = sqrt((a * a) + (b * b));

  printf("hipotenusa = %.4f\n", h);

  return 0;
}