#include <stdio.h>
#include <stdlib.h>

int main(){


    int matriz [5][5];
int acumulador =0;

    for(int linha = 0; linha <5; linha ++){
        for(int coluna =0; coluna < 5; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }

      for(int linha = 0; linha <5; linha ++){
        for(int coluna =0; coluna < 5; coluna++){
            acumulador += matriz[linha][coluna]; 
        }
    }

    printf("%d", acumulador);
    return 0;
}