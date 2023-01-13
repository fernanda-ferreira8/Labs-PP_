/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. 
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B. */

#include <stdio.h>

int retornar(int *pont_A, int *pont_B);

int main(){
    int A, B, resultado;

    printf("Digite um valor para A aqui: ");
    scanf("%d", &A);

    printf("Digite um valor para B aqui: ");
    scanf("%d", &B);

    resultado = retornar (&A, &B);
    printf("O resultado da soma do dobro dos dois numeros eh: %d!", resultado);


}

int retornar(int *pont_A, int *pont_B){
    
    *pont_A = ((*pont_A) * 2);
    *pont_B = ((*pont_B) * 2);

    return ((*pont_A) + (*pont_B));
    
    }