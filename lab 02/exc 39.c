/*39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>

int main()
{
  float prim_ganhador;
  float seg_ganhador;
  float ter_ganhador;
  float valor_final = 780000.00;

  prim_ganhador = valor_final * 0.46;
  seg_ganhador = valor_final * 0.32;
  ter_ganhador = valor_final - (prim_ganhador + seg_ganhador);
  printf("O primeiro ganhador recebera %0.2f", prim_ganhador);
  printf("O segundo ganhador recebera %0.2f", seg_ganhador);
  printf("O terceiro ganhador recebera %0.2f", ter_ganhador);

  return 0;
}