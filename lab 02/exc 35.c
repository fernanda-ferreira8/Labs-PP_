/*35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎^2 + b^2. Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação. */

#include <stdio.h>
#include <math.h>

int main()
{

  int cateto_a;
  int cateto_b;
  float hipotenusa;

  printf("Digite o valor de a aqui: \n");
  scanf("%d", &cateto_a);

  printf("Digite o valor de b aqui: \n");
  scanf("%d", &cateto_b);

  hipotenusa = (cateto_a * cateto_a) + (cateto_b * cateto_b);
  hipotenusa = sqrt(hipotenusa); // A função "sqrt" serve para calcular a raiz de uma variável.
  printf("O resultado eh: %f \n", hipotenusa);

  return 0;
}