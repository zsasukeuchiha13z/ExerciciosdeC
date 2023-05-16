#include <stdio.h>

int main(){

    int numero;
    int maior,menor;
    int resp1, resp2;

    printf("Escreva 10 numeros inteiros: \n");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    for(int i = 0;i < 10;i++){

    scanf("%d", &numero);

    if(numero > maior){

        maior = numero;


    }
    else if(numero < menor){

        menor = numero;


    }

}
    printf("Maior: %d",maior);
    printf("Menor: %d",menor);
}
