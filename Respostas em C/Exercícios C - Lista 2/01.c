#include <stdio.h>

int main(){

    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    if(x >= y){
        printf("O maior numero e: %d", x);
    }
    if(y >= x){
        printf("O maior numero e: %d", y);
    }



}
