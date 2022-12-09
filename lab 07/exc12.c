/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

#include <stdio.h>
#include <string.h>

int main()
{
  char frase[60];
  int i, x;

  printf("Digite uma frase aqui: \n");
  fgets(frase, 60, stdin);

  x = strlen(frase);

  for (i = 0; i <= x; i++)
  {
    if (frase[i] != ' ' && frase[i] != '\0' && frase[i] != '\n')
    {
      printf("%c", frase[i] - 29);
    }
    else
    {
      printf("%c", frase[i]);
    }
  }

  return 0;
}