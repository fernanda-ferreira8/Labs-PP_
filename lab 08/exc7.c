/*7. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/

#include <stdio.h>
#include <string.h>

struct endereco
{
  char rua[20];
  char bairro[20];
  char cidade[20];
  char estado[20];
  char cep[20];
};

typedef struct endereco endereco;

struct cadastro
{
  char nome[20];
  endereco endereco;
  char telefone[20];
};

typedef struct cadastro cadastro;

int main()
{
  cadastro pessoas[5];
  int i, j;
  char aux[20];

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome: ");
    fgets(pessoas[i].nome, 20, stdin);
    fflush(stdin);

    printf("Digite a rua aqui: ");
    fgets(pessoas[i].endereco.rua, 20, stdin);
    fflush(stdin);

    printf("Digite o bairro aqui: ");
    fgets(pessoas[i].endereco.bairro, 20, stdin);
    fflush(stdin);

    printf("Digite a cidade aqui: ");
    fgets(pessoas[i].endereco.cidade, 20, stdin);
    fflush(stdin);

    printf("Digite o estado: ");
    fgets(pessoas[i].endereco.estado, 20, stdin);
    fflush(stdin);

    printf("Digite o cep aqui: ");
    fgets(pessoas[i].endereco.cep, 20, stdin);
    fflush(stdin);

    printf("Digite o telefone aqui: ");
    fgets(pessoas[i].telefone, 20, stdin);
    fflush(stdin);
  }

  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0)
      {
        strcpy(aux, pessoas[i].nome);
        strcpy(pessoas[i].nome, pessoas[j].nome);
        strcpy(pessoas[j].nome, aux);
      }
    }
  }

  for (i = 0; i < 5; i++)
  {
    printf("Nome: %s", pessoas[i].nome);
    printf("Rua: %s", pessoas[i].endereco.rua);
    printf("Bairro: %s", pessoas[i].endereco.bairro);
    printf("Cidade: %s", pessoas[i].endereco.cidade);
    printf("Estado: %s", pessoas[i].endereco.estado);
    printf("Cep: %s", pessoas[i].endereco.cep);
    printf("Telefone: %s\n\n", pessoas[i].telefone);
  }

  return 0;
}