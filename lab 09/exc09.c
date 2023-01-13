/*9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>

int main(){

    float matriz[3][3];
    int i, *pont;

    pont = &matriz[0][0];

    for(i = 0; i < 9; i++){
        printf("[%d]\n", pont + i);
    }
}