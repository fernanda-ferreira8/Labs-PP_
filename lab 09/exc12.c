/*12. Faça um programa que leia três valores inteiros e chame uma função que
 * receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor
 * valor na primeira variável, o segundo menor valor na variável do meio, e o
 * maior valor na última variável. A função deve retornar o valor 1 se os três
 * valores forem iguais e 0 se existirem valores diferentes. Exibir os valores
 * ordenados na tela.  */

#include <stdio.h>

int funcao(int *pont_vet);

int main() {

  int vet[3], i, x;

  for (i = 0; i < 3; i++) {
    printf("Digite um valor para a posicao [%d] aqui:\n", i);
    scanf("%d", &vet[i]);
  }

  x = funcao(&vet); // Variavel para verificar o retorno
  if (x == 1) {
    printf("Eles sao iguais!\n");
  } else if (x == 0) {
    printf("Sao diferentes! :(\n");
  }

  for(i = 0; i < 3; i++){
    printf("%d\n", vet[i]);
  }
}

int funcao(int *pont_vet) {
  int i, j, variavel;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        if(pont_vet[i] < pont_vet[j]){
            variavel = pont_vet[i];
            pont_vet[i] = pont_vet[j];
            pont_vet[j] = variavel;
        }
     
    }
  }