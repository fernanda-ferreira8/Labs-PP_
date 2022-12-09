/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <string.h>

int main()
{

  char cadeia[100];
  int i;

  printf("Digite uma letra aqui: ");
  fgets(cadeia, 100, stdin);

  for (i = 0; cadeia[i] != '\0'; i++)
  {

    if (cadeia[i] >= 65 && cadeia[i] <= 90)
    {
      cadeia[i] = cadeia[i] + 32;
    }

    printf("%c", cadeia[i]);
  }
  return 0;
}
