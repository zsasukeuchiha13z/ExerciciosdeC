#include <stdio.h>

int main(){

    float custo_fabrica;
    float dist,imp;

    float res;

    printf("Quanto foi o custo de fabrica: \n");
    scanf("%f", &custo_fabrica);

    if(custo_fabrica < 12000){
        dist = (custo_fabrica * 1.05) - custo_fabrica;

        // isento de imposto!
        res = custo_fabrica + dist;
    }
    else if(custo_fabrica >= 12000 && custo_fabrica <= 25000){
        dist = (custo_fabrica * 1.10) - custo_fabrica;
        imp = (custo_fabrica * 1.15)- custo_fabrica;

        res = custo_fabrica + dist + imp;
    }
    else{
        dist = (custo_fabrica * 1.15)- custo_fabrica;
        imp = (custo_fabrica * 1.20)- custo_fabrica;

        res = custo_fabrica + dist + imp;
    }

    printf("Valor a ser pago pelo consumidor: %f",res);

}
