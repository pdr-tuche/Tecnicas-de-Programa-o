#include <stdio.h>

//10) Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule a média deaproveitamento, usando a fórmula:MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno,suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e amensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.
int main()
{   
    int matricula;
    float nota1,nota2,nota3,ME,MA;
    char conceito;
    //MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7
    printf("digite a matricula do aluno\n");
    scanf("%d",matricula);
    printf("digite as 3 notas:\n");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    printf("digite a media dos exercicios\n");
    scanf("%f",&ME);
    MA = (nota1 + (nota2*2) + (nota3*3) + ME)/7;

    //>= 90 A>= 75 e < 90 B>= 60 e < 75 C>= 40 e < 60 D< 40 E
    if (MA >= 90){
        conceito = 'A';
    }else if(MA <9.0 && MA >=7.5){
        conceito = 'B';
    }else if(MA <7.5 && MA >= 6.0){
        conceito = 'C';
    }else if(MA < 6.0 && MA >=4.0){
        conceito = 'D';
    }else if(MA < 4.0){
        conceito = 'E';
    }else{
        printf("conceito nao existente");
    }

    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        printf("Aluno da matricula %d foi APROVADO",matricula);
        printf("suas notas foram: %f %f %f a media dos exercicios: %f e a media de aproveitamento foi: %f e o conceito de: %c",nota1,nota2,nota3,ME,MA,conceito);
    }else{
        printf("Aluno da matricula %d foi REPROVADO",matricula);
        printf("suas notas foram: %f %f %f a media dos exercicios: %f e a media de aproveitamento foi: %f e o conceito de: %c",nota1,nota2,nota3,ME,MA,conceito);
    }

    return 0;
}