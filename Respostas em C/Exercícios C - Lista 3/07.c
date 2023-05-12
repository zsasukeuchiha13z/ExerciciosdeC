#include <stdio.h>

int main(){

    int numero;
    int numero_correto;

    for(int i = 0;i < 10;i){

        printf("Digite um numero exclusivamente, positivo: ");
        scanf("%d", &numero);

        if(numero > 0){
            numero_correto = numero;
            i = i + 1;
        }

        if(numero <= 0){
            printf("Numero ignorado\n");
        }

    }



}
