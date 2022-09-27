#include <stdio.h>
#include <stdlib.h>

int main(){

    int idades[10];
    int media;
    printf("digita os valores ai mano\n");
    for(int i =0; i<10; i=i+1){
        scanf("%d", &idades[i]);
    }

     for(int i =0; i<10; i++){
        media += idades[i];        
     }

    printf("a media das idades é: %d", media/10);

    return 0;
}