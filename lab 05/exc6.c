/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/

#include <stdio.h>

int conversao_segundos(int horas, int minutos, int segundos);

int main()
{

  int h;
  int m;
  int s;
  int funcao;

  printf("Digite as horas:\n");
  scanf("%d", &h);

  printf("Digite as minutos:\n");
  scanf("%d", &m);

  printf("Digite as segundos:\n");
  scanf("%d", &s);

  funcao = conversao_segundos(h, m, s);

  return 0;
}
int conversao_segundos(int horas, int minutos, int segundos)
{

  int resultado;
  horas = horas * 60 * 60;
  minutos = minutos * 60;
  resultado = horas + minutos + segundos;

  printf("A quantidade em segundos eh = %d\n", resultado);

  return 0;
}