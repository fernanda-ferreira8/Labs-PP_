/*29. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float media;
  float nota_1;
  float nota_2;
  float nota_3;
  float nota_4;

  printf("Digite a primeira nota: \n");
  scanf("%f", &nota_1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &nota_2);

  printf("Digite a terceira nota: \n");
  scanf("%f", &nota_3);

  printf("Digite a quarta nota: \n");
  scanf("%f", &nota_4);

  media = (nota_1 + nota_2 + nota_3 + nota_4) / 4; // Dividido por 4, pois a média aritmética é obtida somando todos os valores e dividindo esse valor encontrado pelo número de dados de um conjunto//

  printf("O valor da media dos quatro valores é: %f \n", media);

  return 0;
}