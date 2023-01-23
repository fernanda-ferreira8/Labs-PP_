/*8. Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores
do tipo int, usando a função de alocação dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com 
zero (conte os 1500 zeros do vetor);
b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor;
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.*/

#include <stdio.h> // bilbioteca de entrada e saída de dados.
#include <stdlib.h>// funções responsáveis pela alocação de memória e para conversão de inteiros.

int main()
{
    int *vetor, soma = 0, i;

    vetor = (int *)calloc(1500, sizeof(int));

    for (i = 0; i < 1500; i++)
    {
        vetor[i] = 0;
    }

    for (i = 0; i < 1500; i++)
    {
        printf("Posicao [%d]: %d\n", i, vetor[i]);
    }

    free(vetor);
    
    return 0;
}
