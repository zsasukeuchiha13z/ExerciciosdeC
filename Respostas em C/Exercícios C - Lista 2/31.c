#include <stdio.h>

int main(){

    float altura;
    int peso;

    printf("Digite a altura: \n");
    scanf("%f", &altura);
    printf("Digite o peso: \n");
    scanf("%d", &peso);

    if(peso < 60){
        if(altura < 1.20){
            printf("A");
        }
        else if(altura >= 1.20 && altura <= 1.70){
            printf("B");
        }
        else if(altura > 1.70){
            printf("C");
        }
    }
    if(peso >= 60 && peso <= 90){
        if(altura < 1.20){
            printf("D");
        }
        else if(altura >= 1.20 && altura <= 1.70){
            printf("E");
        }
        else if(altura > 1.70){
            printf("F");
        }
    }
    if(peso > 90){
        if(altura < 1.20){
            printf("G");
        }
        else if(altura >= 1.20 && altura <= 1.70){
            printf("H");
        }
        else if(altura > 1.70){
            printf("I");
        }

    }
}
