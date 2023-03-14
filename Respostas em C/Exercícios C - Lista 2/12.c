#include <stdio.h>
#include <math.h>

int main(){

    float x,y;

    printf("Digite um numero: \n");
    scanf("%f", &x);

    if (x < 0){

        printf("Numero invalido");

    }
    else{

    y = log(x);
    printf("Logarimo do numero e: %f", y);


    }




}
