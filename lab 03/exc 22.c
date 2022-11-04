/* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são  Ter pelo menos 65 anos;  Ou ter trabalhado pelo menos 30 anos;  Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int idade;
  int tempo_servico;

  printf("Digite a idade aqui: \n");
  scanf("%d", &idade);

  printf("Digite o tempo de servico aqui (em anos): \n");
  scanf("%d", &tempo_servico);

  if (idade <= tempo_servico)
  {
    printf("Os valores digitados sao invalidos \n");
  }

  if (idade >= 65 || tempo_servico >= 35 || (idade >= 60 && tempo_servico >= 25))
  {
    printf("Essa pessoa esta apta a receber a aposentadoria\n");
  }

  else
  {
    printf("Essa pessoa nao esta apta a receber a aposentadoria! \n");
  }

  return 0;
}
