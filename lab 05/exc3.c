/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include <stdio.h>

float verifica(float num);

int main()
{
  float num;

  printf("Digite um numero aqui: \n");
  scanf("%f", &num);

  verifica(num);
  return 0;
}

float verifica(float num)
{
  if (num > 0)
  {
    printf("O numero eh positivo!");

    return 1;
  }

  else if (num < 0)
  {
    printf("O numero eh negativo!");

    return -1;
  }

  else
  {
    printf("O numero eh zero!");
    return 0;
  }
}