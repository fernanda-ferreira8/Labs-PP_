/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario;
  float valor_prestacao;

  printf("Digite seu salario aqui: \n");
  scanf("%f", &salario);

  printf("Digite o valor da prestacao: \n");
  scanf("%f", &valor_prestacao);

  if (valor_prestacao <= 0.2 * salario)
  {
    printf("Emprestimo nao concedido! \n");
  }
  else
  {
    printf("Emprestimo concedido! \n");
  }
  return 0;
}
