/*20. Escreva uma função para determinar a quantidade de números primos abaixo de N.*/

#include <stdio.h>
#include <time.h>

int main()
{

  FILE *f_output = fopen("output.txt", "w");
  if (f_output == NULL)
    return -1;

  clock_t inicio = clock();

  for (int i = 2; i < 200001; i++)
  {
    int j;
    for (j = 2; j <= (i / 2) && i % j; j++)
      ;

    if (j > (i / 2))
      fprintf(f_output, "%d\n", i);
  }

  clock_t fim = clock();

  double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
  fprintf(f_output, "\nTempo: %.2lfs", tempo);

  return 0;
}