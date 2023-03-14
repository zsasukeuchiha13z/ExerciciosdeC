#include <stdio.h>

int main(){

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        printf("Maior numero e: %d",x);
    }
    else if(y > x){
        printf("Maior numero e: %d",y);
    }
    else{
        printf("Numeros iguais");
    }


}
