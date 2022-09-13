#include <stdio.h>
#include <math.h>

int main()
{   
    float preco;
    int flag;
    float desconto;
    float valorFinal;
    float parcelado;
    float juros;
    printf("Digite o preco:\n");
    scanf("%f",&preco);
    printf("Digite forma de pagamento\n 1 À vista em dinheiro ou cheque, recebe 10 porcento de desconto\n 2- À vista no cartão de crédito, recebe 15 porcento de desconto\n 3- Em duas vezes, preço normal de etiqueta sem juros\n 4- Em duas vezes, preço normal de etiqueta mais juros de 10 porcento \n");
    scanf("%d",&flag);
    
    switch(flag){
        case 1:
            desconto= preco * 0.1;
            valorFinal = preco - desconto;
            break;
        case 2:
            desconto= preco * 0.15;
            valorFinal = preco - desconto;
            break;
        case 3:
            parcelado = preco / 2;
            valorFinal = parcelado;
            break;
        case 4:
            juros = (preco*0.1*2);
            valorFinal = preco + juros;
            break;

    }

    printf("%f", valorFinal);
    return 0;
}
   
    