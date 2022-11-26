/*10. Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <stdio.h>

int comparador(float n1, float n2);

int main()
{

    float n1;
    float n2;
    int funcao;

    printf("Digite dois numeros para serem comparados:\n");
    scanf("%f%f", &n1, &n2);

    funcao = comparador(n1, n2);

    return 0;
}
int comparador(float n1, float n2)
{

    if (n1 > n2)
    {
        printf("%f eh o maior numero\n", n1);
    }
    if (n1 < n2)
    {
        printf("%f eh o maior numero\n", n2);
    }
    if (n1 == n2)
    {
        printf("Os valores sao iguais\n");
    }

    return 0;
}