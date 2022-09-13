#include <stdio.h>

int main() {
   int numeros[3];
   int aux, indice;
   printf("Escreva os números \n");
   for (indice = 0; indice < 3; indice++){
    scanf("%d", &numeros[indice]);
   }
   
   for (indice = 0; indice < 3; indice++){
    for (int j = indice + 1; j < 3; j++){
        if (numeros[indice] < numeros[j]){
            aux = numeros[indice];
            numeros[indice] = numeros[j];
            numeros[j] = aux;
            }
        }
    }

    for (indice = 0; indice < 3; indice++) {
            printf("%d\n", numeros[indice]);
    }
   return 0;
}