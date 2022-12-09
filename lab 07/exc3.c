/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <string.h>

int main()
{

  char string[300];
  int i;

  printf("Digite uma palavra aqui: ");
  fgets(string, 300, stdin);

  while (string[i] != '\0')
  {
    i++;
  }

  while (i >= 0)
  {
    printf("%c", string[i]);
    i--;
  }
  return 0;
}