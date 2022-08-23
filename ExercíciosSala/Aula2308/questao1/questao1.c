# include <stdio.h>
#include <stdlib.h>

int main (){
    float nota1,nota2,nota3;

    printf("digite as notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float media = (nota1+nota2+nota3)/3;

    if(media >= 5){
        printf("APROVADO\N");
    }else{
        printf("REPROVADO\N");
    }
    return 0;
}