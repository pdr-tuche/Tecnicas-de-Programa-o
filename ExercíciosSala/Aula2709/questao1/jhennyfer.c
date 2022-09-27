#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[3];
    float media;
    printf("digita as notas ai mano\n");
    for(int i =0; i<3; i=i+1){
        scanf("%f", &notas[i]);
    }

     for(int i =0; i<3; i=i+1){
        printf("%f", notas[i] );
     }


    for (size_t i = 0; i < 3 ; i++)
    {
        media += notas[i];
    }

    printf("%f", media/3);
    return 0;
}