/* 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int num_1;
  int num_2;

  printf("Digite dois numeros aqui: \n");
  scanf("%d %d", &num_1, &num_2);

  if (num_1 > num_2)
  {
    printf("O numero %d e maior! \n", num_1);
  }

  else
  {
    printf("O numero %d e maior! \n", num_2);
  }
  if (num_1 == num_2)
  {
    printf("Os dois numeros sao iguais! \n");
  }
  return 0;
}