#include <stdio.h>

int main(){

    float valor_venda;
    float res;

    printf("Digite o valor da venda: \n");
    scanf("%f", &valor_venda);

    if(valor_venda >= 100000){
        res = valor_venda * 1.16 + 700;
        res = res - valor_venda;
    }
    if((valor_venda < 100000) && (valor_venda >= 80000)){
        res = valor_venda * 1.14 + 650;
        res = res - valor_venda;
    }
    if((valor_venda < 80000) && (valor_venda >= 60000)){
        res = valor_venda * 1.14 + 600;
        res = res - valor_venda;
    }
    if((valor_venda < 60000) && (valor_venda >= 40000)){
        res = valor_venda * 1.14 + 550;
        res = res - valor_venda;
    }
    if((valor_venda < 40000) && (valor_venda >= 20000)){
        res = valor_venda * 1.14 + 500;
        res = res - valor_venda;
    }
    if(valor_venda < 20000){
        res = valor_venda * 1.14 + 400;
        res = res - valor_venda;
    }

    printf("Comissao : %f",res);


}
