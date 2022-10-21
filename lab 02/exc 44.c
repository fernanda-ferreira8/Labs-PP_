/*44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo 
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

float altura_degrau;
float altura_desejada;
float quantidade_total;

printf("Digite a altura do degrau da escada: ");
scanf ("%f", &altura_degrau);

printf("Digite a altura desejada: ");
scanf("%f", &altura_desejada);

quantidade_total = altura_desejada/altura_degrau;
printf("Voce devera subir %0.1f degraus \n", quantidade_total);
return 0;

}