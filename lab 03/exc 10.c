/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    float imc1;
    float imc2;
    int sexo;

    printf("Escolha o sexo:\n(1)Homem\n(2)Mulher\n");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        printf("Escreva a altura\n");
        scanf("%f", &altura);
        imc1 = (72.7 * altura) - 58;
        printf("O peso ideal dessa pessoa eh: %.2f\n", imc1);
    }

    if (sexo == 2)
    {
        printf("Escreva a altura\n");
        scanf("%f", &altura);
        imc2 = (62.1 * altura) - 58;
        printf("O peso ideal dessa pessoa eh: %.2f\n", imc2);
    }
    return 0;
}
