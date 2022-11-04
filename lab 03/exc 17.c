/* 17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
Lembre-se a base maior e a base menor devem ser números maiores que zero*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base_maior;
    float base_menor;
    float altura;
    float area;

    printf("Digite o valor da base maior do trapezio aqui: \n");
    scanf("%f", &base_maior);
    printf("Digite o valor da base menor do trapezio aqui: \n");
    scanf("%f", &base_menor);
    printf("Digite o valor da altura do trapezio aqui: \n");
    scanf("%f", &altura);

    if (base_maior > 0 && base_menor > 0)
    {
        area = ((base_maior + base_menor) * altura) / 2;
        printf("A area do trapezio eh: %.2f\n", area);
    }

    else
    {
        printf("Os valores dados sao invalidos! \n");
    }
    return 0;
}
