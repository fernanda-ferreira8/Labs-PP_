/*37. As tarifas de certo parque de estacionamento são as seguintes:
 1a e 2a hora - R$1,00 cada;
 3a e 4a hora - R$1,40 cada;
 5a hora e seguintes - R$2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/
#include <stdio.h>
#include <math.h>
int main()
{
  int horaChegada, minutoChegada, horaPartida, minutoPartida, tempoTotal, tempoTotalMinutos;
  float tempoTotalHoras, tempoTotalHorasArredondado, preco;
  printf("Digite a hora de chegada: ");
  scanf("%d", &horaChegada);
  printf("Digite o minuto de chegada: ");
  scanf("%d", &minutoChegada);
  printf("Digite a hora de partida: ");
  scanf("%d", &horaPartida);
  printf("Digite o minuto de partida: ");
  scanf("%d", &minutoPartida);

  tempoTotalMinutos = (horaPartida * 60 + minutoPartida) - (horaChegada * 60 + minutoChegada); // transformar tudo em minutos

  tempoTotalHoras = tempoTotalMinutos / 60.0; // transformar tudo em horas

  tempoTotalHorasArredondado = ceil(tempoTotalHoras); // arredondar por excesso (pra cima)

  if (tempoTotalHorasArredondado < 2)
  {

    preco = tempoTotalHorasArredondado * 1;
  }
  else if (tempoTotalHorasArredondado == 2)
  {

    preco = tempoTotalHorasArredondado * 1;
  }
  else if (tempoTotalHorasArredondado == 3)
  {

    preco = tempoTotalHorasArredondado * 1.4;
  }
  else if (tempoTotalHorasArredondado == 4)
  {
    preco = tempoTotalHorasArredondado * 1.4;
  }

  else
  {
    preco = tempoTotalHorasArredondado * 2;
  }

  // caso mais de 24 horas
  if (horaChegada == horaPartida && minutoChegada == minutoPartida)
  {
    printf("Ficou mais de 24h no estacionamento\n");
    preco = 24 * 2;
  }

  printf("O preco a ser pago eh: %.2f", preco);

  return 0;
}