#include <stdio.h>

int main(){

    int n1,n2,n3;
    int aux;

    printf("Digite o 1o numero: \n");
    scanf("%d",&n1);
    printf("Digite o 2o numero: \n");
    scanf("%d",&n2);
    printf("Digite o 3o numero: \n");
    scanf("%d",&n3);

    if(n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    if(n1 > n3){
        aux = n1;
        n1 = n3;
        n3 = aux;
    }

    if(n2 > n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }


    printf("Ordem crescente: %d %d %d",n1,n2,n3);

}
