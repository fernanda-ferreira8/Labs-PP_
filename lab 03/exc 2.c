/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;
    float raiz_numero;

    printf("Digite um numero aqui: \n");
    scanf("%f", &numero);

    if (numero > 0)
    {
        raiz_numero = sqrt(numero);
        printf(" O numero e positivo e sua raiz quadrada eh: %0.2f", raiz_numero);
    }
    else
        printf("Este numero eh invalido! \n");

    return 0;
}