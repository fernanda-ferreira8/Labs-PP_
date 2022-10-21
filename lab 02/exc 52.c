/*52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada 
deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima 
quanto cada um ganharia do prêmio com base no valor investido.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor_amigo1;
    float valor_amigo2;
    float valor_amigo3;
    float valor_premio;
    float valor_total;

    printf("Digite o valor das apostas dos tres amigos aqui (separado por espaco): \n");
    scanf("%f %f %f %f", &valor_amigo1, &valor_amigo2, &valor_amigo3, &valor_premio);

    valor_total = valor_amigo1 + valor_amigo2 + valor_amigo3;
    valor_amigo1 = (valor_amigo1/valor_total)*valor_premio;
    valor_amigo2 = (valor_amigo2/valor_total)*valor_premio;
    valor_amigo3 = (valor_amigo3/valor_total)*valor_premio;

    printf("O amigo 1 ganharia %0.2f, o amigo 2 ganharia %0.2f, e o amigo 3 ganharia %0.2f do valor da aposta total", valor_amigo1, valor_amigo2, valor_amigo3);
    return 0;
} 