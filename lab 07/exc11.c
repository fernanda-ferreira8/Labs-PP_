/*11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o
segmento S[I..J].*/

#include <stdio.h>
#include <string.h>

int main()
{
  char S[40];
  int i, x, num1, num2, num3;

  printf("Digite uma string aqui: \n");
  fgets(S, 40, stdin);

  for (i = 0; S[i] != '\0'; i++)
  {
    x = i;
  }

  do
  {

    printf("Digite dois inteiros positivos menor que %d aqui: \n", x);
    scanf("%d %d", &num1, &num2);

  } while (num1 < 0 || num2 < 0 || num2 > x || num1 > x);

  if (num1 > num2)
  {
    num3 = num1;
    num1 = num2;
    num2 = num3;
  }

  for (i = num1; i <= num2; i++)
  {
    printf("%c", S[i]);
  }

  return 0;
}