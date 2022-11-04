/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float nota_trab;
  float nota_avaliacao;
  float nota_exame;
  float nota_final;

  printf("Digite a nota do trabalho aqui: \n");
  scanf("%f", &nota_trab);

  printf("Digite a nota da avaliacao semestral aqui: \n");
  scanf("%f", &nota_avaliacao);

  printf("Digite a nota do exame final: \n");
  scanf("%f", &nota_exame);

  nota_final = ((nota_trab * 2) + (nota_avaliacao * 3) + (nota_exame * 5)) / 10;

  if (nota_trab < 0 || nota_trab > 10 || nota_avaliacao < 0 || nota_avaliacao > 10 || nota_exame < 0 || nota_exame > 10)
  {
    printf("Essa nota e invalida! \n");
  }

  else if (nota_final < 3)
  {
    printf("Voce esta reprovado! Sua media eh %.2f \n", nota_final);
  }

  else if (nota_final < 4.9)
  {
    printf("Voce esta de recuperacao! Sua media eh %.2f \n", nota_final);
  }

  else
  {
    printf("Voce esta aprovado! Sua media e %.2f \n", nota_final);
  }

  return 0;
}
