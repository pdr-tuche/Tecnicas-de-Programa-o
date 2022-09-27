#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[10];

    printf("digita os valores ai mano\n");
    for(int i =0; i<10; i=i+1){
        scanf("%d", &numeros[i]);
    }

     for(int i =0; i<10; i++){
        if(numeros[i] % 2 == 0){
            printf("%d - ", numeros[i]);
        }
     }



    return 0;
}