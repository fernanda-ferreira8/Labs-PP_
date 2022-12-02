/*Considerando o tipo de dislalia do Cebolinha, faça um programa em C que, dada uma string de entrada,
gere uma string de saída com todos ‘r’ e ‘rr’ trocados por ‘l’, exceto para os casos que o ‘r’ está no final das palavras. */

#include <stdio.h>
#include <string.h>

#include <stdio.h>

int main()
{
    char strg [100];
    int i;

    printf("Digite uma frase aqui: ");
    fgets(strg, 100, stdin);
    
    for(i=0; strg[i]!= '\0'; i++){
        
        if(strg[i] == 'r' && strg[i+1] != 'r' && strg[i+1] != ' ' && strg[i+1] != '\0' && strg[i+1] != '\n'){
            strg[i] = 'l';
        }

        if(strg[i] == 'r' && strg[i+1] == 'r'){
            strg[i+1] = 'l';
            i++;
        }
        
        printf("%c", strg[i]);
    }
    
    return 0;
}