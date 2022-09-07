#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidade;
    int idade;
    int somaIdades =0;
    printf("diga quants idade voce quer digitar: \n");
    scanf ("%d", &quantidade);

    int i = 0;
    while(i< quantidade){
        printf("digite uma idade :");
        scanf("%d",&idade);

        somaIdades = somaIdades + idade;
        i++;
    }
    printf("%d", somaIdades);
    return 0;
}