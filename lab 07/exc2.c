/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3*/

#include <stdio.h>
#include <string.h>

int main()
{

  char string[200];
  int i;
  int contador = 0;

  printf("Digite uma frase aqui: ");
  fgets(string, 200, stdin);

  for (i = 0; string[i] != '\0'; i++)
  {

    if (string[i] == '1')
    {

      contador++;
    }
  }
  printf("Existem %d numeros '1' na frase. ", contador);

  return 0;
}