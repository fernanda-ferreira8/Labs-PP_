/*8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado.*/

#include <stdio.h>

int main()
{
  int n[10];
  int i;
  int j;

  for (i = 0; i < 10; i++)
  {
    printf("Digite um numero (posicao %d):", i);
    scanf("%d", &n[i]);
    if (i != 0)
    {
      for (j = 0; j < i; j++)
      {
        if (n[j] == n[i])
        {
          printf("Esse valor e conflitante entre as posicoes [%d] e [%d]\n", i, j);
          printf("Digite um numero (posicao %d):", i);
          if (n[j] == n[i])
          {
            j--;
          }
          scanf("%d", &n[i]);
        }
      }
    }
  }

  return 0;
}