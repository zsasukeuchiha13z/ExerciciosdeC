#include <stdio.h>
#include <math.h>

int main(){

    float x, y, z;
    char valor;
    float res;

    printf("Digite o 1o numero: \n");
    scanf("%f", &x);
    printf("Digite o 2o numero: \n");
    scanf("%f", &y);
    printf("Digite o 3o numero: \n");
    scanf("%f", &z);

    printf("Digite..\n");
    printf("a - Geométrica\n");
    printf("b - Ponderada\n");
    printf("c - Harmonica\n");
    printf("d - Aritmetica\n");
    scanf("%s", &valor);

    if(valor == 'a'){
        res = cbrt(x*y*z);
        printf("resultado: %f",res);
    }
    else if (valor == 'b'){
        res = ((x+2*y+3*z)/6);
        printf("resultado: %f",res);
    }
    else if (valor == 'c'){
        res = ((1)/(1/x)+(1/y)+(1/z));
        printf("resultado: %f",res);
    }
    else if (valor =='d'){
        res = ((x + y + z)/3);
        printf("resultado: %f",res);
    }



}
