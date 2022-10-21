/*51. Escreva um programa que leia as coordenadas coordenada_x e y de pontos no R2 e calcule sua distância da origem (0, 0).
FORMULA: distancia = √(xb-xa)^2+(yb-ya)^2*/

#include <stdio.h>
#include <math.h>

int main()
{

    float coordenada_x;
    float coordenada_y;
    float distancia;

    printf("Digite valores para a coordenada x e a coordenada y aqui (separados por espaco): \n ");
    scanf("%f %f", &coordenada_x, &coordenada_y);
    
    distancia = sqrt((coordenada_x*coordenada_x)+(coordenada_y*coordenada_y)); //Acaba a conta aqui porque as coordenadas da origem são (0,0).
    printf("O valor da distanca da origem e: %0.2f \n", distancia);
    
    return 0;
}