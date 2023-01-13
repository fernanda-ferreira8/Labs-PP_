/*2. Escreva um programa que contenha duas variáveis inteiras. Compare seus 
endereços e exiba o maior endereço.*/

#include <stdio.h>

int main(){
  
int variavel_1 = 10, variavel_2 = 20;

if (&variavel_1 > &variavel_2){
    
  printf("Endereco variavel 1 = %d.\nEndereco variavel 2 = %d.\nO maior endereco eh o da variavel 1!", &variavel_1, &variavel_2);
}
else {
  printf("Endereco variavel 1 = %d.\nEndereco variavel 2 = %d.\nO maior endereco eh o da variavel 2!", &variavel_1, &variavel_2);
}
return 0;

}


