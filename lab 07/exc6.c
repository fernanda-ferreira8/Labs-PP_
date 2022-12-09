/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>
#include <string.h>

int main()
{
  char cadeia[300];
  int i;

  printf("Digite uma frase aqui: ");
  fgets(cadeia, 300, stdin);

  for (i = 0; cadeia[i] != '\0'; i++)
  {

    if (cadeia[i] >= 97 && cadeia[i] <= 122)
    {
      cadeia[i] = cadeia[i] - 32;
    }
    printf("%c", cadeia[i]);
  }
  return 0;
}
