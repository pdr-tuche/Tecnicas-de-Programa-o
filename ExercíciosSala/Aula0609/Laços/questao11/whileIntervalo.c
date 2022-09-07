#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero=0;
    int contador=0;
    int i =0;
    while (i<20){
        printf("digite");
        scanf("%d", &numero);
        if (numero >10 && numero < 35){
            contador = contador +1;
        }
        i++;
    }
    printf ("%d", contador);
    return 0;
}