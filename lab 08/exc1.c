/*1. Escreva um trecho de código para fazer a criação dos novos tipos de dados
conforme solicitado abaixo:
- Horário: composto de hora, minutos e segundos. - Data: composto de dia, mês e
ano. - Compromisso: composto de uma data, horário e texto que descreve o
compromisso. */

#include <stdio.h>

struct horario
{
  int hora, minuto, segundo;
};

typedef struct horario horario;

int main()
{

  horario h;

  printf("Digite a hora aqui: ");
  scanf("%d", &h.hora);

  printf("Digite os minutos aqui: ");
  scanf("%d", &h.minuto);

  printf("Dogite os segundos aqui: ");
  scanf("%d", &h.segundo);

  printf("%d:%d:%d", h.hora, h.minuto, h.segundo);

  return 0;
}