/*5. Considerando a estrutura
struct vetor {
    float a;
    float b;
    float c;
}; para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores. */

#include <stdio.h>

struct vetor
{
  float a;
  float b;
  float c;
};

typedef struct vetor vetor;

int main()
{
  vetor vetor[3];
  printf("Digite as medidas do primeiro vetor aqui: \n");
  scanf("%f %f %f", &vetor[0].a, &vetor[0].b, &vetor[0].c);

  printf("Digite as medidas do segundo vetor aqui: \n");
  scanf("%f %f %f", &vetor[1].a, &vetor[1].b, &vetor[1].c);

  vetor[2].a = vetor[0].a + vetor[1].a;
  vetor[2].b = vetor[0].b + vetor[1].b;
  vetor[2].c = vetor[0].c + vetor[1].c;

  printf("As medidas do vetor no R3 formado pela soma dos outros dois vetores sao: %0.2f %0.2f %0.2f\n", vetor[2].a, vetor[2].b, vetor[2].c);

  return 0;
}