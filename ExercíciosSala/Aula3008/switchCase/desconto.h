#include <stdio.h>
#include <stdlib.h>

#ifndef _DESCONTO_H
#define _DESCONTO_H


float desconto() {
    int cliente;
    float total;
    float desconto;
    printf("digite o total em dinheiros: \n");
    scanf("%f", &total);
    printf("digite o tipo do cliente 1-top 2-vip 3-doteiro \n");
    scanf("%d", &cliente);

    switch (cliente)
    {
    case 1:
        desconto = total * 0.1;
        printf("%f", total - desconto);
        break;
    case 2:
        desconto = total * 0.2;
        printf("%f", total - desconto);
        break;
    case 3:
        desconto = total * 0.5;
        printf("%f", total - desconto);
        break;
}

#endif