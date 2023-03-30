#include <stdio.h>

int main (){

    float valor,res;
    int estado;

    printf("Digite o valor do produto : \n");
    scanf("%f", &valor);
    printf("1 - Minas Gerais\n");
    printf("2 - Sao Paulo\n");
    printf("3 - Rio de Janeiro\n");
    printf("4 - Mato Grosso do Sul\n");
    scanf("%d", &estado);

    if (estado == 1){
        res = valor * 1.07;
        printf("Valor Final: %f",res);
    }
    else if (estado == 2){
        res = valor * 1.12;
        printf("Valor Final: %f",res);
    }
    else if(estado == 3){
        res = valor * 1.15;
        printf("Valor Final: %f",res);
    }
    else if(estado == 4){
        res = valor * 1.08;
        printf("Valor Final %f",res);
    }
    else{
        printf("Erro - Nenhum Estado selecionado!!");
    }


}
