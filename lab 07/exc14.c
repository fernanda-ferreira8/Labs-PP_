/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.*/

#include <stdio.h>

int main()
{
  char frase_1[100], frase_2[100];
  int i, n, x;

  printf("Digite uma frase aqui: ");
  fgets(frase_1, 100, stdin);
  printf("Digite uma para concatenar a primeira aqui: ");
  fgets(frase_2, 100, stdin);

  for (i = 0; frase_1[i] != '\0'; i++)
  {
    x = i;
  }

  do
  {
    printf("Digite um numero inteiro  entre 0 e %d para concatenar essa quantidade de carcters da frase 2 a um aqui: ", x);
    scanf("%d", &n);
  } while (x < n);

  for (i = 0; i <= n; i++)
  {
    printf("%c", frase_2[i]);
  }
  for (i = 0; frase_1[i] != '\0'; i++)
  {
    printf("%c", frase_1[i]);
  }

  return 0;
}