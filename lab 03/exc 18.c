/* 18. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int escolha;
    float adicao;
    float subtracao;
    float multiplicacao;
    float divisao;
    float x;
    float y;

    printf("Escolha uma das operacoes matematica: \n");
    printf("(1)Adicao\n");
    printf("(2)Subtracao\n");
    printf("(3)Multiplicacao\n");
    printf("(4)Divisao\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Escolha dois valores para serem somados aqui: \n");
        scanf("%f%f", &x, &y);
        adicao = x + y;
        printf("O resultado eh: %.2f\n", adicao);

        break;

    case 2:
        printf("Escolha dois valores para serem subtraidos: \n");
        scanf("%f%f", &x, &y);
        subtracao = x - y;
        printf("O resultado eh: %.2f\n", subtracao);

        break;

    case 3:
        printf("Escolha dois valores para serem multiplicados:\n");
        scanf("%f%f", &x, &y);
        multiplicacao = x * y;
        printf("O resultado eh: %.2f\n", multiplicacao);

        break;

    case 4:
        printf("Escolha dois valores para serem dividos:\n");
        scanf("%f%f", &x, &y);

        if (y == 0)
        {
            printf("O valor escolhido para a divisao eh invalido\n");
        }

        else
        {
            divisao = x / y;
            printf("O resultado eh: %.2f\n", divisao);
        }

        break;

    default:

        printf("O valor escolhido eh invalido!");

        break;
    }

    return 0;
}
