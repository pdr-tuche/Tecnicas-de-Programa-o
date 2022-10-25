//crie uma estruturade dados do tipo Pessoa. atributos -> int cpf
// int idade, char nome[50]

#include <stdio.h>

typedef struct pessoa{

    int cpf;
    int idade;
    char nome[50];
}t_pessoa;

int main(){


    t_pessoa rapaziada[10];
    int contador =0;

    for(int i =0; i< 10; i++){
        printf("digite dados da %d", rapaziada[i]);
         scanf("%s",&rapaziada[i].nome);
         scanf("%d",&rapaziada[i].idade);
         scanf("%d",&rapaziada[i].cpf);
         if(rapaziada[i].idade >= 15 && rapaziada[i].idade<=35){
            contador++;
         }
    }
    
    for(int i=0;i<10;i++){
        printf("nome %s, idade %d, cpf %d \n",rapaziada[i].nome,rapaziada[i].idade,rapaziada[i].cpf);
    }
    printf("existem %d pessoas com idade entre 15 e 35\n", contador);
    return 0;
}