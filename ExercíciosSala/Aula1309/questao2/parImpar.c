#include <stdio.h>

int main()
{   
    int  v1=0;
    printf("Digite o valor um valor: \n");
    scanf("%d",&v1);
   
    if (v1%2 ==0){
     printf("O valor é par");
    }
    else{
        printf("O valor é impar");
    }

    return 0;
}