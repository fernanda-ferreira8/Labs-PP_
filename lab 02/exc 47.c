/*47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero; 
    int milhar;
    int centena;
    int dezena;
    int unidade;

    printf ("Digite um numero inteiro com quatro digitos: ");
    scanf ("%d", &numero); 

    milhar = numero / 1000; 

    printf ("%d \n", milhar);
    centena = numero / 100; 

    centena = centena % 10; 
    printf ("%d \n", centena);

    dezena = numero / 10; 
    dezena = dezena % 10; 
    printf ("%d \n", dezena);
    
    unidade = numero % 10; 
    printf ("%d", unidade);
    return 0;
}