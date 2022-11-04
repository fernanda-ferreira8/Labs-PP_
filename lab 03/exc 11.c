/*11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos.
Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int soma = 0;
    int resto;

    printf("Digite um numero inteiro aqui (maior do que 0:)");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Esse numero e invalido!\n");
        system("pause");
        return 0;
    }
    if (num > 0)
    {
        resto = num % 10;    // Resto da divisao
        soma = soma + resto; // Soma dos digitos
        num = num / 10;
    }
    printf("A soma dos digitos e: %d", soma);

    return 0;
}
