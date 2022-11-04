/*8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float nota_1;
  float nota_2;
  float media;

  printf("Digite as duas notas obtidas aqui (separadas por enter): \n");
  scanf("%f %f", &nota_1, &nota_2);

  media = (nota_1 + nota_2) / 2;
  if (nota_1 >= 0 && nota_1 <= 10 && nota_2 >= 0 && nota_2 <= 10)
  {
    printf("As notas sao validas e a media entre elas eh %f \n", media);
  }
  else
  {
    printf("As notas sao invalidas!");
  }
  return 0;
}
