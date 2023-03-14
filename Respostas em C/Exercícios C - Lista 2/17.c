#include <stdio.h>

int main(){

    float base_maior, base_menor, altura, resultado;

    printf("Digite o valor da BASE MAIOR: \n");
    scanf("%f", &base_maior);
    printf("Digite o valor da BASE MENOR: \n");
    scanf("%f", &base_menor);
    printf("Digite o valor da ALTURA: \n");
    scanf("%f", &altura);

    if(base_maior > 0 && base_menor > 0){

        resultado = ((base_maior + base_menor) * altura)/2;
        printf("Valor da AREA e igual a: %f", resultado);
    }
    else{
        printf("Algum numero invalido");
    }


}
