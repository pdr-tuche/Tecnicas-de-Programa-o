#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;
    float gastos;

    scanf("%f %f", &salario,&gastos);

    if(gastos >= salario){
        printf("PASSOU DOS LIMITES MEU CHAPA");
    }else{
        printf("dentro dos limites");
    }
    return 0;
}