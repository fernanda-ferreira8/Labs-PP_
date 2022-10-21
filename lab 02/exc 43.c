/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3% sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

float valor;
float desconto;
float parcela; 
float comissao_aVista;
float comissao_Parcela;

printf("Digite um valor: \n");
scanf("%f", &valor);
 
desconto = valor * 0.9; 
printf("O valor do desconto e: %0.2f \n", desconto);

parcela = valor/3; 
printf("O valor da parcela e: %0.2f \n", parcela);

comissao_aVista = desconto * 1.05; 
printf("O valor da comissao a vista e: %0.2f \n", comissao_aVista);

comissao_Parcela = valor * 1.05; 

printf("O valor da comissao da parcela e: %0.2f", comissao_Parcela);

return 0;
}