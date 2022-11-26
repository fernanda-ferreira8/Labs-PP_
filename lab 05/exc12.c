/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará com a mensagem
“Número inválido”.*/

#include <stdio.h>

int soma_digitos(int numero);

int main()
{
  int numero;
  int funcao;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &numero);

  funcao = soma_digitos(numero);

  return 0;
}
int soma_digitos(int numero)
{
  if (numero < 0)
  {
    printf("Esse numero eh invalido!\n");
    return 0;
  }

  int resultado, x = 0;

  for (resultado = 0; numero > 0; x = numero % 10)
  {

    x = numero % 10;
    resultado = resultado + x;
    numero = numero / 10;
  }

  printf("%d\n", resultado);

  return 0;
}