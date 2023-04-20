#include <stdio.h>

int main(){

    float preco_ant,preco_novo;

    printf("Digite o preco: \n");
    scanf("%f", &preco_ant);

    if(preco_ant <= 50){
        preco_novo = preco_ant * 1.05;
        printf("Preco com aumento: %f",preco_novo);
    }
    if(preco_ant > 50 && preco_ant < 100){
        preco_novo = preco_ant * 1.1;
        printf("Preco com aumento: %f",preco_novo);
    }
    if(preco_ant >= 100){
        preco_novo = preco_ant * 1.15;
        printf("Preco com aumento: %f",preco_novo);
    }

}
