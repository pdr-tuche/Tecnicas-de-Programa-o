#include <stdio.h>

int main()
{   
    int  v1=0;
    int  soma1;
    int  soma2;
    printf("Digite o valor um valor: \n");
    scanf("%d",&v1);
   
    if (v1%2 ==0){
    soma1= v1+5;
    printf("O valor é par e sua soma é %d",soma1);
    }
    else{
         soma2= v1+8;
        printf("O valor é impar e sua soma é %d ",soma2);
    }