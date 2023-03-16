#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if(x % 3 == 0){

        printf("NUMERO DIVISIVEL POR 3");

    }else if(x % 5 == 0){

        printf("NUMERO DIVISIVEL POR 5");

    }else{

        printf("NUMERO NAO E DIVISIVEL NEM POR 3 NEM POR 5.");

    }

}
