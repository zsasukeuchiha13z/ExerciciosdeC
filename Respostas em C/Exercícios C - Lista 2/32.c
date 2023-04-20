#include <stdio.h>

int main(){

    int codigo;
    float preco;
    int quant;
    float res;

    //preços
    float CQ = 1.2;
    float BS = 1.3;
    float BCO = 1.5;
    float H = 1.2;
    float C = 1.7;
    float S = 2.2;
    float R = 1;



    printf("Qual codigo do pedido?: \n");
    scanf("%d", &codigo);
    printf("Qual a quantidade?\n");
    scanf("%d", &quant);

    if(codigo == 100){
            res = CQ * quant;
            printf("O pedido deu: %f",res);
    }
    if(codigo == 101){
            res = BS * quant;
            printf("O pedido deu: %f",res);
    }
    if(codigo == 102){
            res = BCO * quant;
            printf("O pedido deu: %f",res);
    }
    if(codigo == 103){
            res = H * quant;
            printf("O pedido deu: %f",res);
    }
    if(codigo == 104){
            res = C * quant;
            printf("O pedido deu: %f",res);
    }
    if(codigo == 105){
            res = S * quant;
            printf("O pedido deu: %f",res);
    }
    if(codigo == 106){
            res = R * quant;
            printf("O pedido deu: %f",res);
    }
}
