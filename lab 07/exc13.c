/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.
Exemplo:ovo
arara
Socorram-me, subi no ônibus em Marrocos
Anotaram a data da maratona*/

#include <stdio.h>
#include <string.h>

int main()
{
  char frase[100];
  int i, x = 0, k;
  
  printf("Digite uma frase (apenas letras): ");
  fgets(frase, 100, stdin);

  for (i = 0; frase[i] != '\0'; i++)
  {
    x = i;
    if (frase[i] >= 65 && frase[i] <= 90)
    {
      frase[i] = frase[i] + 32;
    }
  }
  k = x - 1;
  for (i = 0; i < x; i++)
  {
    if (frase[k] == ' ')
    {
      k--;
    }
    if (frase[i] == ' ')
    {
      i++;
    }
    if (frase[i] != frase[k])
    {
      printf("Nao eh palindromo\n");
      return 0;
    }
    printf("%c = %c", frase[i], frase[k]);
    k--;
  }

  printf("Eh palindromo\n");

  return 0;
}