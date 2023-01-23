/*14. Construa um programa que leia o número de linhas e de colunas de uma matriz de números
reais, aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo 
usuário. Ao final, o programa deverá retornar a matriz na saída padrão com layout apropriado.*/

#include <stdio.h> // bilbioteca de entrada e saída de dados.
#include <stdlib.h>// funções responsáveis pela alocação de memória e para conversão de inteiros.

int main()
{
    int i, j, **matriz, linhas, colunas;

    printf("Digite o numero de linhas da matriz aqui: ");
    scanf("%d", &linhas);
    fflush(stdin);

    printf("Digite o numero de colunas da matriz aqui: ");
    scanf("%d", &colunas);
    fflush(stdin);

    matriz = (int **)malloc(sizeof(int *) * linhas);
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(sizeof(int) * colunas);
        for (j = 0; j < colunas; j++)
        {
            printf("Digite um valor para a posicao [%d][%d] aqui: ", i, j);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }

    for (i = 0; i < linhas; i++)
    {
        printf("|");
        for (j = 0; j < colunas; j++)
        {
            printf(" %5hd |", matriz[i][j]); 
        }
        printf("\n");
    }

    for (i = 0; i < colunas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}