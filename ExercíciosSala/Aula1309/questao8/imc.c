#include <stdio.h>

int main()
{   
    float alt;
    float peso;
    float IMC;
    printf("Digite sua altura:\n");
    scanf("%f",&alt);
    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    IMC= peso/(alt*alt);
   
    if (IMC<18.5){
   
    printf("O vento leva",IMC);
  
    }
    else if (IMC==18.5 && IMC<=25){
        
         printf("Seu IMC %0.2f esta normal");
        
        
    }
     else if (IMC<25 && IMC==30){
        
           printf("Voce esta acima do peso");
        
        
    } 
    else{
        printf ("Academia né meu anjo");
    }

    return 0;
}