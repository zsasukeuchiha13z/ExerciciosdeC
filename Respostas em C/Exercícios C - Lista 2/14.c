#include <stdio.h>

int main(){

    float TL, AS, EF;
    float media;


    printf("Qual foi a nota do Trabalho de Laboratorio: \n");
    scanf("%f", &TL);
    printf("Qual foi a nota da Avaliacao Semestral: \n");
    scanf("%f", &AS);
    printf("Qual foi a nota do Exame Final: ");
    scanf("%f", &EF);

    if(TL >= 0 && TL <=10 && AS >= 0 && AS <=10 && EF >= 0 && EF <= 10){

        media = (TL*2 + AS*3 + EF*5)/10;

    }
    else{

        printf("NOTA INVALIDA!!");

    }

    if(media >= 0 && media < 3 && TL >= 0 && TL <=10 && AS >= 0 && AS <=10 && EF >= 0 && EF <= 10){

        printf("Reprovado!!!");

    }
     else if(media >= 3 && media < 5 && TL >= 0 && TL <=10 && AS >= 0 && AS <=10 && EF >= 0 && EF <= 10){

        printf("Recuperacao!!!");

    }
    else if(media >= 5 && media <= 10 && TL >= 0 && TL <=10 && AS >= 0 && AS <=10 && EF >= 0 && EF <= 10){

        printf("Aprovado!!!");

    }
}
