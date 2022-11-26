/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro.*/

#include <stdio.h>

int esfera(int raio);

int main()
{

  int r;
  int funcao;

  printf("Digite o raio da esfera aqui:\n");
  scanf("%d", &r);
  funcao = esfera(r);

  return 0;
}

int esfera(int raio)
{

  float volume;
  volume = (((4 / 3) * 3.1415) * (raio * raio * raio));

  printf("Volume da esfera = %.4f\n", volume);

  return 0;
}