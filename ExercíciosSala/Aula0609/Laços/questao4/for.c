#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidade;
    int idade;
    int somaIdades =0;
    printf("diga quants idade voce uqerdigitar: \n");
    scanf ("%d", &quantidade);

    for(int i = 0; i< quantidade; i++){
        printf("digite uma idade :");
        scanf("%d",&idade);

        somaIdades = somaIdades + idade;
    }
    printf("%d", somaIdades);
    return 0;
}