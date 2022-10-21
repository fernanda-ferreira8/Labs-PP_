/*21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float Massa_kg;
  float Massa_libras;

  printf("Digite um valor de massa em libras aqui: \n");
  scanf("%f", &Massa_libras);
  Massa_kg = Massa_libras * 0.45;
  printf("O valor de massa encontrado em quilogramas foi: %0.2f \n", Massa_kg);

  return 0;
}