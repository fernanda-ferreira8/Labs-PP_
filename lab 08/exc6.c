/*6. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário.Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela. */

#include <stdio.h>
#include <string.h>

struct dados
{
  char nome[100];
  int idade;
  char sexo;
  char CPF[20];
  char data_nascimento[10];
  int codigo_setor;
  char cargo[30];
  float salario;
};

typedef struct dados dados;

int main()
{
  dados funcionario;
  printf("Digite o nome do funcionario aqui: ");
  fgets(funcionario.nome, 100, stdin);
  fflush(stdin);

  printf("Digite a idade do funcionario aqui: ");
  scanf("%d", &funcionario.idade);
  fflush(stdin);

  printf("Digite o sexo do funcionario aqui: ");
  scanf(" %c", &funcionario.sexo);
  fflush(stdin);

  printf("Digite o CPF do funcionario aqui: ");
  fgets(funcionario.CPF, 20, stdin);
  fflush(stdin);

  printf("Digite a data de nascimento do funcionario aqui: ");
  fgets(funcionario.data_nascimento, 10, stdin);
  fflush(stdin);

  printf("Digite o codigo do setor do funcionario aqui: ");
  scanf("%d", &funcionario.codigo_setor);
  fflush(stdin);

  printf("Digite o cargo do funcionario aqui: ");
  fgets(funcionario.cargo, 30, stdin);
  fflush(stdin);

  printf("Digite o salario do funcionario aqui: ");
  scanf("%f", &funcionario.salario);

  printf("\n\nDados Funcionario aqui:\n");
  printf("NOME: %s", funcionario.nome);
  printf("IDADE: %d", funcionario.idade);

  if (funcionario.sexo == 'm' || funcionario.sexo == 'M')
  {
    printf("\nGenero: Masculino");
  }
  else if (funcionario.sexo == 'f' || funcionario.sexo == 'F')
  {
    printf("\nGenero: Feminino");
  }
  printf("\nCPF: %s", funcionario.CPF);
  printf("Data de Nascimento: %s", funcionario.data_nascimento);
  if (funcionario.codigo_setor > 1 && funcionario.codigo_setor < 99)
  {
    printf("\nCodigo Setor: %d", funcionario.codigo_setor);
  }
  printf("\nCARGO: %s", funcionario.cargo);
  printf("SALARIO: %0.2f\n", funcionario.salario);

  return 0;
}