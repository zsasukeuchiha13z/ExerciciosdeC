#include <stdio.h>

int main(){

    int soma;
    int resultado = 0;
    for(int i = 0;i < 10;i++){

        printf("Digite um numero para somar: ");
        scanf("%d", &soma);

        resultado = resultado + soma;

    }

    printf("Soma deu: %d",resultado);


}
