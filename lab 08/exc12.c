/*12. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
     Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
     Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.*/

#include <stdio.h>
#include <string.h>

struct eletrodomestico
{
  char nome[15];
  float potencia;
  float horas;
};

typedef struct eletrodomestico eletrodomestico;

int main()
{
  eletrodomestico eletro[5];
  int i, j, t;
  float consumo[5], consumo_total;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do eletrodomestico aqui:\n");
    fgets(eletro[i].nome, 15, stdin);
    fflush(stdin);

    printf("Digite a potencia do eletrodomestico aqui:\n");
    scanf("%f", &eletro[i].potencia);
    fflush(stdin);

    printf("Digite quantas horas por dia ele fica ligado aqui:\n");
    scanf("%f", &eletro[i].horas);
    fflush(stdin);
    printf("\n");
  }

  printf("Digite o numero de dias que sao usados os eletrodomesticos aqui:\n");
  scanf("%d", &t);
  fflush(stdin);

  consumo_total = 0;
  for (i = 0; i < 5; i++)
  {
    consumo_total += eletro[i].potencia * eletro[i].horas * t;
  }
  printf("Consumo total da casa: %0.2f\n", consumo_total);

  for (i = 0; i < 5; i++)
  {
    consumo[i] = (eletro[i].potencia * eletro[i].horas * t) / consumo_total;
    printf("Nome: %s", eletro[i].nome);
    printf("Consumo em porcentagem: %0.2f%%\n\n", consumo[i]);
  }

  return 0;
}