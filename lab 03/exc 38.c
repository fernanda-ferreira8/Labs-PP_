#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dia;
  int mes;
  int ano;

  printf("Digite o dia aqui:\n");
  scanf("%d", &dia);

  printf("Digite o mes: \n");
  scanf("%d", &mes);

  printf("Digite o ano: \n");
  scanf("%d", &ano);

  if (ano <= 2022)
  {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 10 || mes == 12)
    {
      if (dia <= 31 && dia > 0)
      {
        printf("Data valida! \n");
      }
      else
      {
        printf("Data  invalida!  \n");
      }
    }

    if (mes == 4 || mes == 5 || mes == 6 || mes == 8 || mes == 9 || mes == 11)
    {
      if (dia <= 30 && dia > 0)
      {
        printf("Data valida! \n");
      }
      else
      {
        printf("Data  invalida! \n");
      }
    }

    if (mes == 2)
    {
      if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0) && dia <= 30 && dia > 0)
      {
        printf("Data valida! \n");
      }
      if ((ano % 4 != 0) && dia <= 28 && dia > 0 && dia <= 30 && dia > 0)
      {
        printf("Data valida! \n");
      }
      else
      {
        printf("Data  invalida! \n");
      }
    }

    if (mes > 12 || mes < 0)
    {
      printf("Data  invalida! \n");
    }
  }

  else
  {
    printf("Data  invalida! \n");
  }
  return 0;
}