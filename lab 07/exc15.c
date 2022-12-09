/*15. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os
caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual
posição deve ser criada a substring e qual é o tamanho da substring.
*/

#include <stdio.h>
#include <string.h>

void main()
{
  char string1[20], string2[20], c1, c2, operador, substring[20];
  int i, contador = 0, posicao, tamanho;

  do
  {
    printf("(a)Ler uma String S1\n");
    printf("(b)Imprimir o tamanho da String\n");
    printf("(c)Comparar a String S1 a S2 e imprimir seu resultado\n");
    printf("(d)Concatenar a S1 a uma nova S2 e imprimir seu resultado\n");
    printf("(e)Imprimir S1 reversa\n");
    printf("(f)Contar quantas vezes um caracter aparece\n");
    printf("(g)Substituir a primeira ocorrencia do caracter C1 da String S1\n");
    printf("(h)Verificar se uma String S2 é substring de S1\n");
    printf("(i)Retornar uma substring de S1\n");
    scanf("%c", &operador);
    getchar();

    switch (operador)
    {
    case 'a':
      printf("\nDigite a string S1:\n");
      fgets(string1, 20, stdin);
      string1[strlen(string1) - 1] = '\0';
      break;

    case 'b':
      printf("O tamanho da string S1 é %d\n", strlen(string1));
      break;

    case 'c':
      printf("\nDigite a string S2: ");
      fgets(string2, 20, stdin);
      printf(strcmp(string1, string2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
      break;

    case 'd':
      printf("\nDigite a string S2: ");
      fgets(string2, 20, stdin);
      printf("O resultado da concatenação é \"%s\"\n", strcat(string1, string2));
      break;

    case 'e':

      for (i = strlen(string1) - 1; i >= 0; i--)
      {
        printf("%c", string1[i]);
      }
      printf("\n");
      break;

    case 'f':

      printf("\nDigite o caractere: ");
      scanf(" %c", &c1);

      for (i = 0; string1[i] != '\0'; i++)
      {
        if (string1[i] == c1)
        {
          contador++;
        }
      }

      printf("\nO caractere %c aparece %d vezes na string S1\n", c1, contador);
      break;

    case 'g':
      printf("\nDigite o caractere C1: ");
      scanf(" %c", &c1);

      printf("\nDigite o caractere C2: ");
      scanf(" %c", &c2);

      for (i = 0; string1[i] != '\0'; i++)
      {
        if (string1[i] == c1)
        {
          string1[i] = c2;
          break;
        }
      }
      printf("A string S1 agora é %s\n", string1);
      break;

    case 'h':
      printf("\nDigite a string S2: ");
      fgets(string2, 20, stdin);
      if (strstr(string1, string2) != NULL)
      {
        printf("A string S2 é substring de S1\n");
      }
      else
      {
        printf("A string S2 não é substring de S1\n");
      }
      break;
    case 'i':
      printf("\nDigite a posição: ");
      scanf("%d", &posicao);
      printf("\nDigite o tamanho: ");
      scanf("%d", &tamanho);

      for (i = posicao; i <= tamanho; i++)
      {
        substring[i] = string1[posicao + i];
      }
      substring[i + 1] = '\0';

      printf("A substring é %s\n", substring);
      break;
    }
  } while (operador >= 'a' || operador <= 'i');
}