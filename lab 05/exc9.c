/*9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 = ∗ 𝑟𝑎𝑖𝑜2
∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde  = 3.141592.*/

#include <stdio.h>

int hipotenusa(float h, float r);

int main()
{

  float h;
  float r;
  int funcao;

  printf("Digite o valor da altura aqui:\n");
  scanf("%f", &h);
  printf("Digite o valor do raio aqui:\n");
  scanf("%f", &r);

  funcao = hipotenusa(h, r);

  return 0;
}
int hipotenusa(float h, float r)
{

  float volume;
  volume = 3.1415 * r * r * h;

  printf("O volume eh = %.4f\n", volume);

  return 0;
}