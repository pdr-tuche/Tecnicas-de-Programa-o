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
#include <string.h>

int main(){
    int n1,n2, soma, compararFLAGAUX;
    char flag [3];

    do{
        printf("primeiro numero : ");
        scanf("%d", &n1);
        printf("segundo numero: ");
        scanf("%d", &n2);
        
        soma = n1+n2;
        printf("%d \n",soma);
        
        printf("Novo calculo? (sim/nao)");
        scanf("%s", flag);

        compararFLAGAUX = strcmp(flag, "sim");
       
    }while (compararFLAGAUX == 0);
    return 0;
}