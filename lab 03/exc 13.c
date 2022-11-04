/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float nota_p1;
  float nota_p2;
  float nota_p3;
  float media;

  printf("Digite suas notas aqui: \n");
  scanf("%f %f %f", &nota_p1, &nota_p2, &nota_p3);

  if (nota_p1 < 0 || nota_p1 > 100 || nota_p2 < 0 || nota_p2 > 100 || nota_p3 < 0 || nota_p3 > 100)
  {
    printf("Essa nota e invalida! \n");
  }
  media = (nota_p1 + nota_p2 + (nota_p3 * 2)) / 4;

  if (media > 60)
  {
    printf("Voce foi aprovado! Sua media e %.2f \n", media);
  }
  else
  {
    printf("Voce nao foi aprovado!Sua media e %.2f \n", media);
  }
  return 0;
}
