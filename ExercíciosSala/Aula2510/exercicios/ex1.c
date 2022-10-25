//crie uma estruturade dados do tipo Pessoa. atributos -> int cpf
// int idade, char nome[50]

#include <stdio.h>

typedef struct pessoa{

    int cpf;
    int idade;
    char nome[50];
}t_pessoa;

int main(){


    t_pessoa pessoa1;
    t_pessoa pessoa2;

    printf("digite dados da %d", pessoa1);
    scanf("%s",&pessoa1.nome);
    scanf("%d",&pessoa1.idade);
    scanf("%d",&pessoa1.cpf);
    printf("digite dados da %d", pessoa2);
    scanf("%s",&pessoa2.nome);
    scanf("%d",&pessoa2.idade);
    scanf("%d",&pessoa2.cpf);



    printf("nome %s, idade %d, cpf %d",pessoa1.nome,pessoa1.idade,pessoa1.cpf);
    printf("nome %s, idade %d, cpf %d",pessoa2.nome,pessoa2.idade,pessoa2.cpf);
    return 0;
}