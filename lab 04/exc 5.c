/*5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int numero; //contador
  int soma = 0;
  int valor;

  for (numero = 0; numero < 10; numero++){
    printf("Digite os valores aqui: ");
    scanf("%d", &valor);
    soma += valor; //Equivalente a soma = soma + valor
  }
  

  printf("A soma desses valores eh: %d\n!", soma);
  return 0;
}