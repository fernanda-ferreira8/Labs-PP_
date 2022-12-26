/*18. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
 int dia;
 int mes;
 int ano;
};*/

#include <stdio.h>
#include <string.h>

struct dma
{
  int dia;
  int mes;
  int ano;
};

typedef struct dma dma;

int main()
{
  dma data1, data2;
  int dias = 0;

  printf("Digite a data 1 aqui: ");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
  fflush(stdin);

  printf("Digite a data 2 aqui: ");
  scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);
  fflush(stdin);

  if (data1.ano == data2.ano)
  {
    if (data1.mes == data2.mes)
    {
      dias = data2.dia - data1.dia;
    }
    else
    {
      dias = (data2.mes - data1.mes) * 30 + data2.dia - data1.dia;
    }
  }
  else
  {
    dias = (data2.ano - data1.ano) * 365 + (data2.mes - data1.mes) * 30 + data2.dia - data1.dia;
  }

  printf("Dias: %d\n", dias);

  return 0;
}