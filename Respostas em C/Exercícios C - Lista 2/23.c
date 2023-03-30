#include <stdio.h>

int main(){

    int ano;

    printf("Digite uma ano: \n");
    scanf("%d", &ano);

    if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0)){
        printf("ANO BISSEXTO\n");
    }else{
        printf("NAO E BISSEXTO\n");
    }


}
