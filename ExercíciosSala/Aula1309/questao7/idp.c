#include <stdio.h>

int main()
{   
    char sexo;
    float alt;
    float idpm;
    float idpf;
    printf("Digite M para masculino ou F para feminino:\n");
    scanf("%c",&sexo);
   
    if (sexo=='M'){
   
    printf("Digite sua altura: ");
    scanf("%f",&alt);
    idpm = (72.7 * alt) - 58;
    printf("Seu peso ideal é: %f", idpm);
    }
    else{
        
         printf("Digite sua altura: ");
         scanf("%f",&alt);
         idpf = (62.1 * alt) - 44.7;
         printf("Seu peso ideal é: %0.2f", idpf);
        
    }

    return 0;
}