/*19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas, não simultaneamente pelos dois.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero inteiro aqui: \n");
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("O numero eh divisivel por 3! \n");
    }

    else
    {
        printf("O numero nao eh divisivel por 3! \n");
    }

    if (num % 5 == 0)
    {
        printf("O numero eh divisivel por 5 \n");
    }

    else
    {
        printf("O numero nao eh divisivel por 5! \n");
    }
    return 0;
}
