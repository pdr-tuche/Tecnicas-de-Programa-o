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


    int numero;

    printf("digite um numero:\n");
    scanf("%d", &numero);

    if(numero >= 10 && numero <=15){
        printf("numero entre 10 e 15 =)");
    }else{
        printf("nao esta contido");
    }

    
    return 0;
}