/*2. Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocação
dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.*/

#include <stdio.h> // bilbioteca de entrada e saída de dados.
#include <stdlib.h>// funções responsáveis pela alocação de memória e para conversão de inteiros.

int main()
{
    int *vetor, tamanho, i;

    printf("Digite o tamanho do vetor aqui: ");
    scanf("%d", &tamanho);

    vetor = (int*)malloc(sizeof(int*) * tamanho);

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite com um valor para posicao [%d] aqui: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < tamanho; i++)
    {
        printf(" %d |", vetor[i]);
    }

    free(vetor);
    
    return 0;
}
