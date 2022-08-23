#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade;

    scanf("%d", &idade);


    if(idade >= 10 && idade<= 15){
        printf("CATEGORIA INFANTIL");
    }else if (idade >=16 && idade <= 20){
        printf("CATEGORIA JUVENIL");
    }else if(idade >= 21 && idade <= 35){
        printf("CATEGORIA ADULTO");
    }else if (idade >= 36 && idade <= 65){
        printf("CATEGORIA MASTER");
    }
    
    
    return 0;
}