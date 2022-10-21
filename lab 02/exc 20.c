/*20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Massa_kg;
  float Massa_libras;

  printf("Digite um valor de massa em kg aqui: \n");
  scanf("%f", &Massa_kg);
  Massa_libras = Massa_kg / 0.45;
  printf("O valor de massa enncontrado em libras foi: %f \n", Massa_libras);

  return 0;
}