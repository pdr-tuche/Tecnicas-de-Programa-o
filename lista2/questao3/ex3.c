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
    int linha,coluna;
    printf("Digite as dimensoes do quadrado: ");
    scanf("%d",&linha);
    scanf("%d",&coluna);

    for(int i =0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("X ");
        }
        printf("\n");
    }

    return 0;
}