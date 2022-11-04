#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dia;
  int mes;
  int ano;

  printf("Digite o dia aqui: \n");
  scanf("%d", &dia);

  printf("Digite o mes aqui \n");
  scanf("%d", &mes);

  printf("Digite o ano aqui: \n");
  scanf("%d", &ano);

  if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
  {
    if (dia <= 31 && dia > 0)
    {
      printf("Opcoes validas: Dia:%d Mes:%d Ano:%d\n", dia, mes, ano);
    }
    else
    {
      printf("Opcao digitada invalida! \n");
    }
  }

  if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    if (dia <= 30 && dia > 0)
    {
      printf("Opcoes validas: Dia:%d Mes:%d Ano:%d\n", dia, mes, ano);
    }
    else
    {
      printf("Opcao digitada invalida! \n");
    }
  }

  if (mes == 2)
  {
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0) && dia <= 30 && dia > 0)
    {
      printf("Opcoes validas: Dia:%d Mes:%d Ano:%d\n", dia, mes, ano);
    }
    if ((ano % 4 != 0) && dia <= 28 && dia > 0 && dia <= 30 && dia > 0)
    {
      printf("Opcoes validas: Dia:%d Mes:%d Ano:%d\n", dia, mes, ano);
    }
    else
    {
      printf("Opcao digitada invalida\n");
    }
  }

  if (mes > 12 || mes < 0)
  {
    printf("Opcao digitada invalida\n");
  }
  return 0;
}
