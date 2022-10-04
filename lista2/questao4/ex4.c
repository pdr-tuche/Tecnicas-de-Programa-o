/**
 * @file ex2.c
 * @author Pedro Neves (https://github.com/pdr-tuche)
 * @brief 
 * @version 0.1
 * @date 2022-10-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros [10];
    int conta3=0;
    int pesquisa;
    int contaPesquisa=0;

    printf("digite os numeros :\n");
    for(int i =0; i< 10;i++){
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++){
        if(numeros[i] == 3){
            conta3++;
        }
    }

    printf("numero 3 presente %d vezes na sequencia\n", conta3);

    printf("digite um numero a ser pesquisado: ");
    scanf("%d", &pesquisa);

    for (int i = 0; i < 10; i++){
        if(numeros[i] == pesquisa){
            contaPesquisa++;
        }
    }

   printf("numero %d presente %d vezes na sequencia\n", pesquisa, contaPesquisa);

    return 0;
}