#include <stdbool.h>
#include <stdio.h>

typedef struct aluno {
  char nome[50];
  char matricula[10];
  int codigoDisciplina;
  float notas[2];
  float media;

} t_aluno;

int main() {
  t_aluno vetAlunos[10];

  // pegando dados
  for (int i = 0; i < 10; i++) {
    t_aluno aluno;

    printf("\ndigite o nome do aluno: ");
    scanf("%s", &aluno.nome);
    printf("digite a matricula do aluno: ");
    scanf("%s", &aluno.matricula);
    printf("digite o codigo da disciplina: ");
    scanf("%d", &aluno.codigoDisciplina);
    printf("digite a 1 nota: ");
    scanf("%f", &aluno.notas[0]);
    printf("digite a 2 nota: ");
    scanf("%f", &aluno.notas[1]);

    float aux = (aluno.notas[0] * 1.0) + (aluno.notas[1] * 2.0);
    aluno.media = aux / 2;

    vetAlunos[i] = aluno;
  }

  // mostrar dados
  for (int i = 0; i < 10; i++) {
    printf("==============\n");
    printf("nome : %s \n", vetAlunos[i].nome);
    printf("matricula : %s \n", vetAlunos[i].matricula);
    printf("notas: %f %f \n", vetAlunos[i].notas[0], vetAlunos[i].notas[1]);
    printf("media: %f\n", vetAlunos[i].media);
  }

  return 0;
}