/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:  O número digitado ao quadrado  A raiz quadrada do número digitado */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;
    float raiz_numero;
    float quadrado_numero;

    printf("Digite um numero real aqui: \n");
    scanf("%f", &numero);

    if (numero > 0)
    {
        quadrado_numero = numero * numero;
        raiz_numero = sqrt(numero);
        printf("O quadrado do numero eh %0.2f \n A raiz quadrada eh %0.2f", quadrado_numero, raiz_numero);
    }
    return 0;
}
