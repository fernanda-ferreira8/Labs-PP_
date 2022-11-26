/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0/5,0) + 32,0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int conv_fahrenheit(int Celsius);

int main()
{

    int C;
    int funcao;
    printf("Digite a temperatura em Celsius:\n");
    scanf("%d", &C);

    funcao = conv_fahrenheit(C);

    return 0;
}
int conv_fahrenheit(int Celsius)
{

    float F;
    F = (Celsius * 1.8) + 32;

    printf("Fahrenheit = %.2f\n", F);

    return 0;
}
