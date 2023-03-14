#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Qual a 1o nota? \n");
    scanf("%f", &n1);
    printf("Qual a 2o nota? \n");
    scanf("%f", &n2);
    printf("Qual a 3o nota? \n");
    scanf("%f", &n3);

    media = (n1*1 + n2*1 + n3*2)/4;
    printf("Media ponderada deu: %f\n", media);


    if(media >= 6.0){

        printf("APROVADO!!!");

    }
    else{

        printf("REPROVADO!!!");

    }

}
