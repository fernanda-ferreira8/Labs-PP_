/*Calcule as raízes da equação de 2º grau. Lembrando que:
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.  Se  < 0, não existe real. Imprima a mensagem “Não existe raiz”.  Se  = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.  Se   0, imprima as duas raízes reais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float a;
  float b;
  float c;
  float delta;
  float x1;
  float x2;
  char quadrado = 253;

  printf("Escreva os valores de a, b e c\n");
  scanf("%f %f %f", &a, &b, &c);

  printf("A funcao escrita eh: (%.2fx%c) + (%.2f) + (%.2f) = 0 \n", a, quadrado, b, c);

  delta = pow(b, 2) - (4 * a * c);

  if (delta < 0)
  {
    printf("Nao existe raiz! \n");
  }

  if (delta == 0)
  {
    printf("Raiz unica! \n");
  }

  if (delta > 0)
  {
    x1 = (-(b) + (sqrt(delta))) / 2 * a;
    x2 = (-(b) - (sqrt(delta))) / 2 * a;

    printf("As raizes sao %.2f e %.2f! \n", x1, x2);
  }

  return 0;
}
