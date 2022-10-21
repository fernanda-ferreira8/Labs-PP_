/*15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Angulo_Graus;
  float Angulo_Radianos;

  printf("Digite um angulo em radianos aqui: \n");
  scanf("%f", &Angulo_Radianos);
  Angulo_Graus = Angulo_Radianos * 180 / 3.141592;
  printf("O valor encontrado em graus foi: %0.2f \n", Angulo_Graus);

  return 0;
}