/*
make by: Jhennyfer Lima;
*/


#include <stdio.h>
typedef struct dados{
  int id;
  char nome[100];
  char end[100];
}t_dados;
int main(void) {
  t_dados pessoa;
  printf("Digite seu nome: \n");
  scanf("%s", &pessoa.nome);
  printf("Digite sua idade: \n");
  scanf("%d", &pessoa.id);
  printf("Digite seu endereco: \n");
  scanf("%s",&pessoa.end);
  
  return 0;
}