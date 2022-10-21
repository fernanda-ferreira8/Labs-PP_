/*45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  char letra_maiuscula;
  char letra_minuscula;

  printf("Digite uma letra maiuscula: ");
  scanf("%c", &letra_maiuscula);

  letra_minuscula = letra_maiuscula + 32; // Para cada conversão de letra maiúscula em minúscula (e vice e versa) acrescenta-se ou diminue-se 32dec, que é a diferença de dec entre um caracter maiúsculo e minúsculo.
  printf("A letra minuscula e: %c", letra_minuscula);
  return 0;
}