#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet [5];

    for(int i=0; i<=4; i++){
        printf("Digite um número");
        scanf("%d", &vet[i]);
    }

    for( int i =0; i<=4; i++){
        printf("%d\t",vet[i]);
    }

    for (int i = 4; i>=0; i--)
    {
        printf("%d\t",vet[i]);
    }
    
    return 0;
}