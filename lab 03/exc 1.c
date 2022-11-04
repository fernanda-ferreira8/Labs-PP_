/* 1. Faça um programa que receba dois números e mostre qual deles é o maior. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1;
    float num_2;

    printf("Digite dois numeros aqui (separados por enter): \n");
    scanf("%f %f", &num_1, &num_2);

    if (num_1 > num_2)
    {
        printf("O maior numero eh: %0.2f \n", num_1);
    }
    else
    {
        printf("O maior numero eh: %0.2f \n", num_2);
    }
    return 0;
}
