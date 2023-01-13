/*11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h> 

int main(){
    
    int vetor[5];
    int i, *pont;

    pont = &vetor;

    for(i = 0; i < 5; i++){
        printf("Digite um valor aqui: ");
        scanf("%d", pont + i);
    }
        
    for(i = 0; i < 5; i++){
        if (*(pont + i) % 2 == 0){
            printf("%d\n", pont + i);
        }
    }
    
}