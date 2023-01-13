/*7. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre 
estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. 
Imprima os valores de A e B na função principal. */

#include <stdio.h>

void soma (int *pont_A, int *pont_B);

int main(){

    int A, B;
    printf("Digite um valor para A: ");
    scanf("%d", &A);

    printf("Digite um valor para B: ");
    scanf ("%d", &B);

    soma (&A, &B);

    printf("O valor de A agora eh %d\n O valor de B eh %d!", A, B);
}

void soma (int *pont_A, int *pont_B){
    *pont_A = ((*pont_A) + (*pont_B));
    
}