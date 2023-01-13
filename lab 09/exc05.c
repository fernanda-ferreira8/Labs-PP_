/*5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e 
o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela. */

#include <stdio.h>

int valores(int *p_num1, int *p_num2);

int main(){

int num1, num2;

printf("Digite dois valores inteiros aqui: ");
scanf("%d %d", &num1, &num2);

valores(&num1, &num2);

printf("A variavel 1 vale %d (maior valor).\n", num1);
printf("A variavel 2 vale %d.\n", num2);

}

int valores(int *p_num1, int *p_num2){
    
    int aux;

    if(*p_num2 > *p_num1){

    aux = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = aux;
    }
}