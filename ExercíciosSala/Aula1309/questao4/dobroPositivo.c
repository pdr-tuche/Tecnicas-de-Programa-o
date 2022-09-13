#include <stdio.h>

int main(void) {
  int num1;
  int dobro;
  int triplo;
  printf("digite os numeros\n");
  scanf("%d",&num1);

  if(num1 > 0){
    dobro = num1*2;
    printf("%d", dobro);
  }else if(num1 < 0){
    triplo = num1*3;
    printf("%d", triplo);
  }else{
    printf("numero igual a zero");
  }
  return 0;
}