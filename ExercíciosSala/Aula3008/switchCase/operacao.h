#include <stdio.h>
#include <stdlib.h>

#ifndef _OPERACAO_H
#define _OPERACAO_H
float operacao();

float operacao() {
  float a,b;
  int var;
  float resp;
  printf("digite dois numeros: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("digite a operacao\n 1-subtracao 2-soma 3-multip 4-divisao \n" );
    scanf("%d", &var);
  switch (var) {
  case 1: {
    resp= a-b;
    break;
  }

  case 2: {
    resp = a+b;

    break;
  }

  case 3: {
    resp = a*b;

    break;
  }
  case 4: {
    resp = a/b;

    break;
    }
  }
  return resp;
}
  


#endif