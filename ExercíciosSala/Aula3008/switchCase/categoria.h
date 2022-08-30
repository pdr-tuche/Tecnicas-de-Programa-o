#ifndef _CATEGORIA_H
#define _CATEGORIA_H
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void categoria() {
  char var;
	printf("Digite a letra da categoria: ");
	scanf("%c", &var);
	switch(var){
		case 'a':
			printf("categoria infantil.");
			break;
		
		case 'b':
			printf("categoria juvenil.");
			break;
		
		case 'c':
			printf("categoria adulto.");
			break;
		
    case 'd':
			printf("categoria master.");
			break;
	}

}



#endif

