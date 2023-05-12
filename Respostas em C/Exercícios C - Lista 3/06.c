#include <stdio.h>

int main(){

    float numero;
    float resultado;
    resultado = 0;
    float media;
    for(int i = 0;i < 10;i++){

        printf("Digite um numero: ");
        scanf("%f",&numero);

        resultado = resultado + numero;

    }

    media = resultado/10;
    printf("Media= %f",media);

return 0;
}
