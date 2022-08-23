#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1,num2;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        printf("numero 1 e o maior de todoooos\n");
    }else if (num2 > num1){
        printf("numero 2 e o maior de todosss\n");
    }else{
        printf("numeros iguais\n");
    }
    
    
    return 0;
}