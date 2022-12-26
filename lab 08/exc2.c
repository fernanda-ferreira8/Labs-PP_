/*2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa
 * e armazene os dados em uma estrutura.*/

#include <stdio.h>

struct dados {
  char nome[50], endereco[100];
  int idade;
};

typedef struct dados dados;

int main() {

  dados d;

  printf("Digite o nome aqui: ");
  fgets(d.nome, 50, stdin);

  fflush(stdin);
  printf("Digite o endereco aqui: ");
  fgets(d.endereco, 100, stdin);

  printf("Digite a idade aqui: ");
  scanf("%d", &d.idade);

  printf("Os dados encontrados foram:\n Nome: %s Idade: %d\n Endereco: %s", d.nome, d.idade, d.endereco);
  
  return 0;
}