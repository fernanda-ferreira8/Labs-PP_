/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <string.h>

int main()
{

  char vetor[300];
  int i;

  printf("Digite uma frase aqui: ");
  fgets(vetor, 300, stdin);

  for (i = 0; vetor[i] != '\0'; i++)
  {

    if (vetor[i] == ' ')
    {
      i++;
    }
    printf("%c", vetor[i]);
  }
  return 0;
}