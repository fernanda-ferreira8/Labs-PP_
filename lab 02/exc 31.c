/*31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num_inteiro;
   int antecessor;
   int sucessor;

   printf("Digite um numero inteiro aqui: \n");
   scanf("%d", &num_inteiro);

   antecessor = num_inteiro - 1;
   sucessor = num_inteiro + 1;
   printf("Os valores encontrados foram: %d e %d", antecessor, sucessor);

   return 0;
}
