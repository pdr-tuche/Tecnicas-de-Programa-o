#include <stdbool.h>
#include <stdio.h>

typedef struct aluno {
  char nome[50];
  char matricula[10];
  float notas[3];
  float media;
  bool aprovacao;

} t_aluno;

int main() {
  t_aluno vetAlunos[5];
  float maiorNota = 0;
  float maiorMediaGeral = 0;
  char alunoMaiorMedia[50];
  float menorMediaGeral = 100;
  char alunoMenorMedia[50];

  // pegando dados
  for (int i = 0; i < 5; i++) {
    t_aluno aluno;
    float acumulador = 0;

    printf("\ndigite o nome do aluno: ");
    scanf("%s", &aluno.nome);
    printf("digite a matricula do aluno: ");
    scanf("%s", &aluno.matricula);
    for (int j = 0; j < 3; j++) {
      printf("digite a %d nota: ", j + 1);
      scanf("%f", &aluno.notas[j]);
      acumulador += aluno.notas[j];
    }
    aluno.media = acumulador / 3;

    if (aluno.media >= 6.0) {
      aluno.aprovacao = true;
    } else {
      aluno.aprovacao = false;
    }

    vetAlunos[i] = aluno;
  }

  // verificando maior nota na primeira prova
  for (int i = 0; i < 5; i++) {
    if (vetAlunos[i].notas[0] > maiorNota) {
      maiorNota = vetAlunos[i].notas[0];
    }
  }

  // pegando maior media geral
  for (int i = 0; i < 5; i++) {
    if (vetAlunos[i].media > maiorMediaGeral) {
      maiorMediaGeral = vetAlunos[i].media;
      // alunoMaiorMedia = vetAlunos[i].nome;
    }
  }

  // pegando menor media geral
  for (int i = 0; i < 5; i++) {
    if (vetAlunos[i].media < menorMediaGeral) {
      menorMediaGeral = vetAlunos[i].media;
      // alunoMenorMedia = vetAlunos[i].nome;
    }
  }

  // mostrar dados
  for (int i = 0; i < 5; i++) {
    printf("==============\n");
    printf("nome : %s \n", vetAlunos[i].nome);
    printf("matricula : %s \n", vetAlunos[i].matricula);
    printf("notas: %f %f %f \n", vetAlunos[i].notas[0], vetAlunos[i].notas[1],
           vetAlunos[i].notas[2]);
    if (vetAlunos[i].aprovacao == true) {
      printf("APROVADO\n");
    } else {
      printf("REPROVADO\n");
    }
  }
  printf("### ESTATISTICAS ###\n");
  printf("a maior nota da primeira prova foi : %f\n", maiorNota);
  /*printf("o aluno com maior media foi %s com media de %f\n", alunoMaiorMedia,
         maiorMediaGeral);
  printf("o aluno com menor media foi %s com media de %f\n", alunoMenorMedia,
         menorMediaGeral);*/
  printf("maior media foi de %f\n", maiorMediaGeral);
  printf("menor media foi %f\n", menorMediaGeral);

  return 0;
}