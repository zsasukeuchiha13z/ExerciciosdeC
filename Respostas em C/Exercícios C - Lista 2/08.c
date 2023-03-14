#include <stdio.h>

int main(){

    float x, y;
    float media;

    printf("Qual a 1o nota?: \n");
    scanf("%f", &x);
    printf("Qual a 2o nota?: \n");
    scanf("%f", &y);


    if(x >= 0.0 && x <= 10.0 && y >= 0.0 && y <= 10.0){
        media = (x + y)/2;
        printf("Media igual a: %f", media);
    }
    else{
        printf("Valor invalido");
    }



}
