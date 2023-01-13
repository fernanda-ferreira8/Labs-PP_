/*10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros,
leia esse array do teclado e imprima o dobro de cada valor lido. */

#include <stdio.h> //Função pra entrada e saída de dados

int main(){

    int vetor[5];
    int i, *pont; 

    pont = &vetor;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor aqui: ");
        scanf("%d", (pont + i));
    }

    for (i = 0; i < 5; i++)
    {
        printf("O dobro do valor na posicao [%d] eh: %d\n", i, *(pont + i) * 2);
    }
}
