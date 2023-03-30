#include <stdio.h>

int main(){

    float x, y;
    float res;
    int esc;

    printf("Digite o 1o numero: \n");
    scanf("%f", &x);
    printf("Digite o 2o numero: \n");
    scanf("%f", &y);

    printf("1- Soma de 2 numeros\n");
    printf("2- Diferenca entre 2 numeros\n");
    printf("3- Produto entre 2 numeros\n");
    printf("4- Divisao entre 2 numeros\n");

    scanf("%d", &esc);
    switch(esc){
    case 1:
        res = x + y;
        printf("Resultado da soma: %f",res);
        break;
    case 2:
        if (x >= y){
            res = x - y;
            printf("Resultado da diferenca: %f",res);
        }else{
            res = y - x;
            printf("Resultado da diferenca: %f",res);
        }
        break;
    case 3:
        res = x * y;
        printf("Resultado do produto: %f",res);
        break;
    case 4:
        if(y != 0){
            res = x/y;
            printf("Resultado da divisao: %f",res);
            break;
        }else{
            printf("NAO PODE DIVISAO POR 0\n");
            break;
        }
    default:
        printf("Opcao Invalida.");
    }

}
