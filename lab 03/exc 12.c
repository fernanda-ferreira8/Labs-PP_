/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float resultado;

    printf("Digite um numero aqui: ");
    scanf("%f", &num);

    if (num < 0)
    {
        printf("Este numero e invalido!");
    }
    else
    {
        (resultado = log10(num));
        printf("O log de %f e %f \n", num, resultado);
    }

    return 0;
}
