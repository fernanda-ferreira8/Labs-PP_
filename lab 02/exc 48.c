/*48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numero_segundos;
  int numero_horas;
  int numero_minutos;
  int segundos;

  printf("Digite um valor inteiro em segundos: \n");
  scanf("%d", &numero_segundos);

  numero_horas = numero_segundos / 3600; // Pega o numero total de segundos que o usuario digitou e divide pelo numero de segundos contidos em uma hora.
  printf("Horas: %d \n", numero_horas);

  numero_minutos = (numero_segundos / 60) - (numero_horas * 60);
  printf("Minutos: %d \n", numero_minutos);

  segundos = numero_segundos % 60;
  printf("Segundos: %d", segundos);

  return 0;
}