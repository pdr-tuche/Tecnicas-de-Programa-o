#include <stdio.h>

typedef struct aluno {
  char nome[50];
  char matricula[10];
  char curso[100];
} t_aluno;

int main() {
  t_aluno vetAlunos[5];

  for (int i = 0; i < 5; i++) {
    t_aluno aluno;
    printf("\ndigite o nome do aluno: ");
    scanf("%s", &aluno.nome);
    printf("digite a matricula do aluno: ");
    scanf("%s", &aluno.matricula);
    printf("digite o curso do alun: ");
    scanf("%s", &aluno.curso);

    vetAlunos[i] = aluno;
  }

  for (int i = 0; i < 5; i++) {
    printf("==============\n");
    printf("aluno %d\n", i);
    printf("nome :%s \n", vetAlunos[i].nome);
    printf("matricula :%s \n", vetAlunos[i].matricula);
    printf("curso :%s \n", vetAlunos[i].curso);
  }
  return 0;
}