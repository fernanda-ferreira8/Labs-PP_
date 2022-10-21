/*49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica.
O programa deve resultar com o novo horário (hora, minuto e segundo) do termino da mesma.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int hora_inicial;
  int minuto_inicial;
  int segundo_inicial;
  int hora_final;
  int minuto_final;
  int segundo_final;
  int duracao_segundos;

  printf("Entre com horas na primeira linha, minutos na segunda, segundos na terceira e a duracao em segundos na ultima: \n");
  scanf("%d\n%d\n%d\n %d", hora_inicial, &minuto_inicial, &segundo_inicial, &duracao_segundos);

  // Situação em que interfere apenas nos segundos.
  segundo_final = segundo_inicial + duracao_segundos;
  minuto_final = minuto_inicial;
  hora_final = hora_inicial;

  while (segundo_final > 59)
  {
    minuto_final++;
    segundo_final -= 60;
    hora_final = hora_inicial;
  }

  // Caso haja mudança nas horas.
  if (minuto_final > 59)
  {
    hora_final = hora_inicial + 1;
    minuto_final = minuto_final - 60;
  }

  printf("Hora final: %d horas, %d minutos e %d segundos", hora_final, minuto_final, segundo_final);

  return 0;
}
