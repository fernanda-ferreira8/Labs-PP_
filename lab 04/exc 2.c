/*2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // 1. Repetição "for"
  int i;

  for (i = 1; i <= 100; i++) // i + 1 = i++
  {
    printf("%d\n", i);
  }

  // 2. Repetição "while"
  i = 1;

  while (i <= 100)
  {
    printf("%d\n", i);
    i++; // i++ = i + 1
  }

  // 3. Repetição "do-while"
  i = 1;
  do
  {
    printf("%d\n", i);
    i++;
  } while (i <= 100);

  return 0;
}