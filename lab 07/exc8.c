/* 8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

#include <stdio.h>
#include <string.h>

int main()
{

  char letra[300];
  int i;
  char L1, L2;

  printf("Digite a frase aqui: ");
  fgets(letra, 300, stdin);

  printf("Digite a letra a ser substituida: ");
  scanf("%c %c", &L1, &L2);

  for (i = 0; letra[i] != '\0'; i++)
  {
    if (letra[i] == L1)
    {
      letra[i] = L2;
    }
    printf("%c", letra[i]);
  }
  return 0;
}