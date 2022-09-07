#include <stdio.h>
#include <stdlib.h>
//quantos usuarios tem na empresa e receba o salario de cada um dos funcionarios ]ç calc a afolha de pagamento mensal da empresa
int main(){
    int quantidade;
    float acumulador=0;
    float salario;
    int contador4k=0;
    printf("digite quantos funcionarios\n");
    scanf("%d", &quantidade);
    for (int i =0 ; i<quantidade; i++){
        printf("digite o salario\n");
        scanf("%f", &salario);
        acumulador+=salario;
        if(salario >= 4000){
            contador4k++;
        }
    }
    printf ("folha de pagamento: %f \n", acumulador);
    printf("%d salarios acima de 4k \n", contador4k);
    return 0;
}