#include <stdio.h>

int main(){

    int x, y;
    int dif;

    printf("Digite o 1o numero: \n");
    scanf("%d",&x);
    printf("Digite o 2o numero: ");
    scanf("%d",&y);

    if(x >= y){
        printf("Maior numero e: %d\n",x);
    }
    else{
        printf("Maior numero e: %d\n",y);
    }

    dif = x - y;
    printf("A diferenca e: %d",dif);



}
