#ifndef _MESES_H
#define _MESES_H
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch,
 * system("pause") or input loop */

void meses() {
  int mes;
  printf("Digite o número que corresponde ao mês desejado: ");
  scanf("%d", &mes);

  switch (mes) {
  case 1: {
    printf("Janeiro tem 31 dias.");

    break;
  }

  case 2: {
    printf("Fevereiro tem 28 dias.");

    break;
  }

  case 3: {
    printf("Março tem 31 dias.");

    break;
  }

  case 4: {
    printf("Abril tem 30 dias.");

    break;
  }

  case 5: {
    printf("Maio tem 31 dias.");

    break;
  }

  case 6: {
    printf("junho tem 30 dias.");

    break;
  }
  case 7: {
    printf("julho tem 30 dias.");

    break;
  }
  case 8: {
    printf("agosto tem 30 dias.");

    break;
  }
  case 9: {
    printf("setembro tem 30 dias.");

    break;
  }
  case 10: {
    printf("outubro tem 30 dias.");

    break;
  }
  case 11: {
    printf("novembro tem 30 dias.");

    break;
  }
  case 12: {
    printf("dezembro tem 31 dias.");

    break;
  }
  }
}

#endif