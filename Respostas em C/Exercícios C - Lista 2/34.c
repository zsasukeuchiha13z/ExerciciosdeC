#include <stdio.h>

int main(){

    float nota;
    int faltas;

    printf("Qual foi a sua nota: \n");
    scanf("%f",&nota);
    printf("Quantas faltas voce teve?> \n");
    scanf("%d",&faltas);

    if(faltas <= 20){
        if(nota >= 9.0 && nota <= 10){
            printf("A");
        }
        else if(nota >= 7.5 && nota < 9.0){
            printf("B");
        }
        else if(nota >=  5.0 && nota < 7.5){
            printf("C");
        }
        else if(nota >= 4.0 && nota < 5.0){
            printf("D");
        }
        else if(nota < 4){
            printf("E");
        }
        else{
            printf("Nota INVALIDA!!");
        }
    }
    if(faltas > 20){
        if(nota >= 9.0 && nota <= 10){
            printf("B");
        }
        else if(nota >= 7.5 && nota < 9.0){
            printf("C");
        }
        else if(nota >=  5.0 && nota < 7.5){
            printf("D");
        }
        else if(nota >= 4.0 && nota < 5.0){
            printf("E");
        }
        else if(nota < 4){
            printf("E");
        }
        else{
            printf("Nota INVALIDA!!");
        }
    }


}
