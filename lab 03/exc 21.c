/*21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção*/

#include <stdio.h>

int main(){
    int opcao;
    float num1; 
    float num2;
    float resultado;

    printf("Escolha uma das opcoes abaixo: \n");
    printf("1 - Soma \n");
    printf("2 - Diferenca \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    printf("Opcao: ");
    scanf("%d", &opcao);
  
    switch(opcao){
        case 1:
            printf("Entre com o primeiro numero: ");
            scanf("%f", &num1);
            printf("Entre com o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("O resultado da soma e: %0.2f", resultado);
            break;
       
        case 2:
            printf("Entre com o primeiro numero: ");
            scanf("%f", &num1);
            printf("Entre com o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("O resultado da diferenca e: %0.2f", resultado);
            break;
       
        case 3:
            printf("Entre com o primeiro numero: ");
            scanf("%f", &num1);
            printf("Entre com o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("O resultado da multiplicacao e: %0.2f", resultado);
            break;
        
        case 4:
            printf("Entre com o primeiro numero: ");
            scanf("%f", &num1);
            printf("Entre com o segundo numero: ");
            scanf("%f", &num2);
                while(num2 == 0){
                    printf("O denominador nao pode ser zero\n");
                    printf("Entre com o segundo numero: ");
                    scanf("%f", &num2);
                }
            resultado = num1 / num2;
            printf("O resultado da divisao e: %0.2f", resultado);
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}
