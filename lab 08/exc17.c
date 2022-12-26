/*17. Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com ostipos
básicos necessários e implementar o que se pede.
O Cadastro é composto de:
Nome        Endereço        Salário
Identidade  CPF             Estado Civil
Telefone    Idade           Sexo
O Endereço é composto de:
Rua         Bairro          Cidade
Estado      CEP
a) Crie um vetor Cadastro com 5 elementos;
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros;
c) Encontre a pessoa com maior idade entre os cadastrados;
d) Encontre as pessoas do sexo masculino;
e) Encontre as pessoas com salario maior que 1000;
f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo
usuário.*/

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
  float salario;
  char identidade[20];
  char cpf[20];
  char estado_civil[20];
  char telefone[20];
  int idade;
  char sexo[20];
};

typedef struct cadastro cadastro;

int main()
{
  cadastro pessoas[5];
  int i, maior_idade = 0, maior_idade_index = 0, sexo_masculino = 0, salario_maior = 0, identidade_igual = 0;
  char identidade[20];

  // b)
  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome aqui: ");
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

    printf("Digite o estado aqui: ");
    fgets(pessoas[i].endereco.estado, 20, stdin);
    fflush(stdin);

    printf("Digite o cep aqui: ");
    fgets(pessoas[i].endereco.cep, 20, stdin);
    fflush(stdin);

    printf("Digite o salario aqui: ");
    scanf("%f", &pessoas[i].salario);
    fflush(stdin);

    printf("Digite a identidade aqui: ");
    fgets(pessoas[i].identidade, 20, stdin);
    fflush(stdin);

    printf("Digite o cpf aqui: ");
    fgets(pessoas[i].cpf, 20, stdin);
    fflush(stdin);

    printf("Digite o estado civil aqui: ");
    fgets(pessoas[i].estado_civil, 20, stdin);
    fflush(stdin);

    printf("Digite o telefone aqui: ");
    fgets(pessoas[i].telefone, 20, stdin);
    fflush(stdin);

    printf("Digite a idade aqui: ");
    scanf("%d", &pessoas[i].idade);
    fflush(stdin);

    printf("Digite o sexo aqui: ");
    fgets(pessoas[i].sexo, 20, stdin);
    fflush(stdin);
  }

  // c)
  for (i = 0; i < 5; i++)
  {
    if (pessoas[i].idade > maior_idade)
    {
      maior_idade = pessoas[i].idade;
      maior_idade_index = i;
    }
  }

  printf("Pessoa com maior idade: %s", pessoas[maior_idade_index].nome);

  // d)
  for (i = 0; i < 5; i++)
  {
    if (strcmp(pessoas[i].sexo, "masculino") == 0)
    {
      sexo_masculino++;
    }
  }

  printf("Pessoas do sexo masculino: %d", sexo_masculino);

  // e)
  for (i = 0; i < 5; i++)
  {
    if (pessoas[i].salario > 1000)
    {
      salario_maior++;
    }
  }

  printf("Pessoas com salario maior que 1000: %d ", salario_maior);

  // f)
  printf("Digite a identidade: ");
  fgets(identidade, 20, stdin);
  fflush(stdin);

  for (i = 0; i < 5; i++)
  {
    if (strcmp(pessoas[i].identidade, identidade) == 0)
    {
      identidade_igual = i;
    }
  }

  printf("Nome: %s", pessoas[identidade_igual].nome);
  printf("Rua: %s", pessoas[identidade_igual].endereco.rua);
  printf("Bairro: %s", pessoas[identidade_igual].endereco.bairro);
  printf("Cidade: %s", pessoas[identidade_igual].endereco.cidade);
  printf("Estado: %s", pessoas[identidade_igual].endereco.estado);
  printf("CEP: %s", pessoas[identidade_igual].endereco.cep);
  printf("Salario: %.2f\n", pessoas[identidade_igual].salario);
  printf("Identidade: %s", pessoas[identidade_igual].identidade);
  printf("CPF: %s", pessoas[identidade_igual].cpf);
  printf("Estado civil: %s", pessoas[identidade_igual].estado_civil);
  printf("Telefone: %s", pessoas[identidade_igual].telefone);
  printf("Idade: %d\n", pessoas[identidade_igual].idade);
  printf("Sexo: %s", pessoas[identidade_igual].sexo);

  return 0;
}