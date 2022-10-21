/* 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido. Exemplo:
numero_lido = 123
numero_gerado = 321*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int num_positivo;
  int unidade;
  int dezena;
  int centena;

  printf("Digite um numero inteiro de tres digitos aqui: \n");
  scanf("%d", &num_positivo);

  centena = num_positivo / 100; // Divide o valor recebido pelo usuario por 100. Por ser um numero inteiro as casas decimais do resultado são desconsideradas e usa-se somente a parte inteira.

  dezena = num_positivo % 100; // A casa decimal desconsiderada antes agora é guardada pela variável "dezena".

  unidade = dezena % 10; // A variável "unidade" recebe o valor decimal da divisão acima.

  dezena = dezena / 10;

  printf("Valor invertido: %d%d%d", unidade, dezena, centena);
  return 0;
}