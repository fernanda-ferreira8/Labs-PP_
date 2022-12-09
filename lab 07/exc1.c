/*1. Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>
#include <string.h>

int main()
{

  char string[100];
  printf("Digite uma frase aqui: ");

  fgets(string, 100, stdin);
  printf("A frase digitada foi: %s", string);

  return 0;
}