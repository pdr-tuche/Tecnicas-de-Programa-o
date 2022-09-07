#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero=0;
    int contador=0;
    for (int i =0 ; i<20; i++){
        printf("digite");
        scanf("%d", &numero);
        if (numero >10 && numero < 35){
            contador = contador +1;
        }
    }
    printf ("%d", contador);
    return 0;
}