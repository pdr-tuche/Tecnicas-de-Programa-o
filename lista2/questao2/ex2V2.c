/**
 * @file ex2V2.c
 * @author Pedro Neves (https://github.com/pdr-tuche)
 * @brief 
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário: “Novo
// Cálculo(S/N)?”. Deve-se ler a resposta e se a resposta for „S‟ (sim), deve-se
// repetir todos oscomandos (instruções) novamente, mas se for qualquer outra
// resposta, o algoritmo deveser finalizado escrevendo a mensagem “Fim dos
// Cálculos”. Escolha a opção maisadequada de comando de loop para resolver este
// problema

#include <stdio.h>

int main(void) {
  int n1, n2, soma;
  char flag = 'S';

  while (flag == 'S') { 
    printf("digite os numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("resultado da soma = %d \n", soma);
    printf("[S] to continue... \n");
    scanf("%s", &flag);
  }
  printf("Fim dos calculos");

  return 0;
}