/*14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
R = G*/180, sendo G o ângulo em graus e R em radianos e  = 3.141592*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Angulo_Graus;
  float Angulo_Radianos;

  printf("Digite um angulo em graus aqui: \n");
  scanf("%f", &Angulo_Graus);
  Angulo_Radianos = Angulo_Graus * 3.141592 / 180;
  printf("O valor encontrado em radianos foi: %0.2f \n", Angulo_Radianos);

  return 0;
}