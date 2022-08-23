#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;

    scanf("%d" , &numero);
    
    if (numero % 5 == 0){
        printf("numero divisivel por 5 \n");
    }else{
        printf("numero NAO divisivel por 5\n");
    }
    return 0;
}