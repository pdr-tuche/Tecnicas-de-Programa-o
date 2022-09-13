#include <stdio.h>

int main()
{   float  A=0;
    float  B=0;
    float  C=0;
    printf("Digite o valor que sera atribuido a A: \n");
    scanf("%f",&A);
    printf("Digite o valor que sera atribuido a B: \n");
    scanf("%f",&B);
    printf("Digite o valor que sera atribuido a C: \n");
    scanf("%f",&C);
    if (A+B>C){
        printf("A soma de A+B é maior que C");
    }
    else{
        printf("A soma de A+B é menor que C");
    }

    return 0;
}