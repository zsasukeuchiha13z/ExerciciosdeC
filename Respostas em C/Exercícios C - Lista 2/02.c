#include <stdio.h>
#include <math.h>

int main(){

    float x, y;

    printf("Digite um numero: ");
    scanf("%f", &x);

    if(x >= 0){
        y = sqrt(x);
        printf("%f", y);
    }
    else {
        printf("Numero invalido");
    }



}
