/*53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
como o preço do metro de tela p. Imprima o custo_total para cercar este mesmo terreno com tela.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float comprimento;
    float largura;
    float preco_metro;
    float custo_total;

    printf("Digite o valor do comprimento e da largura aqui (mesma linha, separados por espaco): \n ");
    scanf("%f %f", &comprimento , &largura);

    printf("Digite o valor do preco do metro aqui: \n");
    scanf("%f", &preco_metro);

    custo_total = comprimento*largura*preco_metro;
    printf("O custo final para cercar este terreno com tela e %0.2f reais", custo_total);
    return 0;
}