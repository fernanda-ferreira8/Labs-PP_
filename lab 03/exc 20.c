/* Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e, se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes conceitos:  O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;  Chama-se equilátero o triângulo que tem três lados iguais;  Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;  Recebe o nome de escaleno o triângulo que tem os três lados diferentes;*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Digite 3 numeros inteiros aqui: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Os valores sao invalidos! \n");
    }

    if (a + b > c && a + c > b && c + b > a)
    {

        if (a == b && b == c)
        {
            printf("O triangulo eh equilatero! \n");
        }

        if (a != b && b != c)
        {
            printf("O triangulo eh escaleno! \n");
        }

        if ((a == b && b != c) || (a != b && b == c))
        {
            printf("O triangulo eh isoceles! \n");
        }
    }

    else
    {
        printf("Os valores sao invalidos! \n");
    }

    return 0;
}
