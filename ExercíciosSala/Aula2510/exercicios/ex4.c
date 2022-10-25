//crie uma estruturade dados do tipo Pessoa. atributos -> int cpf
// int idade, char nome[50]

#include <stdio.h>

typedef struct banda{

    char nome[50];
    int quantIntegrantes;
    char categoriaMusical[50];
    int ranking;
}t_banda;

int main(){


    t_banda bandas[2];

    for(int i =0; i< 2; i++){
        printf("digite dados da %d", bandas[i]);
         scanf("%s",&bandas[i].nome);
         scanf("%d",&bandas[i].quantIntegrantes);
         scanf("%s",&bandas[i].categoriaMusical);
         scanf("%d",&bandas[i].ranking);
    }
    
    for(int i=0;i<2;i++){
        if(bandas[i].ranking == i+1){
            printf("nome: %s \n, quantidade de integrantes: %d\n, categoria musical: %s \n, ranking: %d\n ###################",
            bandas[i].nome,bandas[i].quantIntegrantes,bandas[i].categoriaMusical,bandas[i].ranking);
        }
    }
    return 0;
}