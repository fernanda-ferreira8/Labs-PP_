/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado. */

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
        raiz_numero = sqrt(numero);
        printf("O numero eh positivo e sua raiz quadrada eh: %0.2f \n", raiz_numero);
    }
    else
    {
        quadrado_numero = numero * numero;
        printf("O numero eh negativo e seu quadrado eh: %0.2f \n", quadrado_numero);
    }

    return 0;
}
