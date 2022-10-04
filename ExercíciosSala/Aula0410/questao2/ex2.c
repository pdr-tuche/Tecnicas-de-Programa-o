#include <stdio.h>
#include <stdlib.h>

int main(){


    int matriz [4][4];

    for(int linha = 0; linha <4; linha ++){
        for(int coluna =0; coluna < 4; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }

      for(int linha = 0; linha <4; linha ++){
        for(int coluna =0; coluna < 4; coluna++){
            if(linha == coluna){
                printf("%d", matriz[linha][coluna]);
            }
        }
    }
    return 0;
}