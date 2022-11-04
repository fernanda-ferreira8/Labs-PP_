#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float altura;
  float peso;

  printf("Escreva o peso da pessoa em quilos: \n");
  scanf("%f", &peso);

  printf("Escreva a altura da pessoa em metros: \n");
  scanf("%f", &altura);

  if (altura < 1.2 && peso < 60)
  {
    printf("A \n");
  }

  if (altura >= 1.2 && altura <= 1.70 && peso < 60)
  {
    printf("B\n");
  }

  if (altura >= 1.70 && peso < 60)
  {
    printf("C\n");
  }

  if (altura < 1.20 && peso >= 60 && peso <= 90)
  {
    printf("D\n");
  }

  if (altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90)
  {
    printf("E\n");
  }

  if (altura >= 1.70 && peso >= 60 && peso <= 90)
  {
    printf("F\n");
  }

  if (altura < 1.20 && peso > 90)
  {
    printf("G\n");
  }

  if (altura >= 1.20 && altura <= 1.70 && peso > 90)
  {
    printf("H\n");
  }

  if (altura > 1.70 && peso > 90)
  {
    printf("I\n");
  }

  return 0;
}
