/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A,B,C;
    printf("Digite os numeros\n");
    scanf("%d", &A);
    scanf("%d", &B);
    
    if(A == B){
        C = A+B;
    }else{
        C=A*B;
    }
    printf("%d",C);
    
    return 0;
}