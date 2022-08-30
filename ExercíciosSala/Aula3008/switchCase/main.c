#include <stdio.h>
#include <stdlib.h>

#include "operacao.h"
#include "meses.h"
#include "categoria.h"
/* run this program using the console pauser or add your own getch,
 * system("pause") or input loop */

int main(int argc, char *argv[]) {
  int fun;

  printf("digite a funcao ");
  scanf("%d", &fun);

  switch (fun) {
  case 1: {
    printf("%f", operacao());
    break;
    }
    case 2:{
      meses();
      break;
    }
    case 3:{
      // o unico que nao funciona, nao consegue ler o scanf de char
      categoria();
      break;
    }
    default:printf("default");
  }
  return 0;
}
