/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.*/

#include <stdio.h>
#include <string.h>

int main()
{

  char letra[300];
  int i;
  int contador = 0;

  printf("Digite uma frase aqui: ");
  fgets(letra, 300, stdin);

  for (i = 0; letra[i] != '\0'; i++)
  {
    if (letra[i] == 'a' || letra[i] == 'e' || letra[i] == 'i' || letra[i] == 'o' || letra[i] == 'u')
    {
      contador++;
      letra[i] = '*';
    }
    if (letra[i] == 'A' || letra[i] == 'E' || letra[i] == 'I' || letra[i] == 'O' || letra[i] == 'U')
    {
      contador++;
      letra[i] = '*';
    }
  }

  printf("Existem %d vogais na frase\n", contador);

  for (i = 0; letra[i] != '\0'; i++)
  {
    printf("%c", letra[i]);
  }

  return 0;
}