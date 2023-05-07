#include <stdio.h>


int main(){

    int peso;
    float altura;

    float res;

    printf("---- Calculo IMC ----\n");
    printf("---------------------\n");
    printf("--Qual seu peso?: ");
    scanf("%d", &peso);
    printf("--Qual sua altura?: ");
    scanf("%f", &altura);

    res = peso/(altura*altura);

    if(res < 18.5){
        printf("Abaixo do peso");
    }
    else if(res >= 18.6 && res <=24.9){
        printf("Saudavel");
    }
    else if(res >= 25 && res <= 29.9){
        printf("peso em excesso");
    }
    else if(res >= 30 && res <= 34.9){
        printf("Obesidade Grau I");
    }
    else if(res >= 35 && res <= 39.9){
        printf("Obesidade Grau II(severa)");
    }
    else{
        printf("Obesidade Grau III(morbida)");
    }


}
