/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros*/

#include <stdio.h>
#include <string.h>

int main()
{
  char carro[5][15];
  int litros[5], quilometros[5], Kml[5];
  int i, j, k, x;
  float media_litroKM;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o modelo do carro (%d) aqui: ", i);
    fgets(carro[i], 15, stdin);
  }
  for (i = 0; i < 5; i++)
  {
    for (j = 0; carro[i][j] != '\0'; j++)
    {
      printf("%c", carro[i][j]);
    }
    printf("Digite o consumo em litros do carro aqui:");
    scanf("%d", &litros[i]);

    printf("Digite a quilometragem: ");
    scanf("%d", &quilometros[i]);

    Kml[i] = quilometros[i] / litros[i];
  }

  x = Kml[0];
  for (i = 0; i < 5; i++)
  {
    if (x < Kml[i])
    {
      x = i;
    }
  }

  printf("O modelo de carro mais economico eh: ");
  for (i = 0; carro[x][i] != '\0'; i++)
  {
    printf("%c", carro[x][i]);
  }

  media_litroKM = Kml[x] * 100;
  printf("A quantidade de litros para esse modelo fazer 100 kms eh: %f", media_litroKM);

  return 0;
}