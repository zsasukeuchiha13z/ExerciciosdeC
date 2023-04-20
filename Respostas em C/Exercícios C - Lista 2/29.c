#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2,n3,n4,n5,n6;
    int res;
    int resposta;
    int somatorio1;
    int somatorio2;

    n1 = rand() % 100;
    n2 = rand() % 100;
    n3 = rand() % 100;
    n4 = rand() % 100;
    n5 = rand() % 100;
    n6 = rand() % 100;

    somatorio1 = 0;
    somatorio2 = 0;

    printf("Qual e a soma de %d + %d?: \n",n1,n2);
    res = n1 + n2;
    scanf("%d", &resposta);
    if(resposta == res){
        printf("ACERTOU A 1o!\n");
        somatorio1 = somatorio1 + 1;
    }else{
        printf("ERROU A 1o\n");
        somatorio2 = somatorio2 + 1;
    }

    printf("Qual e a soma de %d + %d?: \n",n2,n3);
    res = n2 + n3;
    scanf("%d", &resposta);
    if(resposta == res){
        printf("ACERTOU A 2o!\n");
        somatorio1 = somatorio1 + 1;
    }else{
        printf("ERROU A 2o\n");
        somatorio2 = somatorio2 + 1;
    }

    printf("Qual e a soma de %d + %d?: \n",n3,n4);
    res = n3 + n4;
    scanf("%d", &resposta);
    if(resposta == res){
        printf("ACERTOU A 3o!\n");
        somatorio1 = somatorio1 + 1;
    }else{
        printf("ERROU A 3o\n");
        somatorio2 = somatorio2 + 1;
    }

    printf("Qual e a soma de %d + %d?: \n",n4,n5);
    res = n4 + n5;
    scanf("%d", &resposta);
    if(resposta == res){
        printf("ACERTOU A 4o!\n");
        somatorio1 = somatorio1 + 1;
    }else{
        printf("ERROU A 4o\n");
        somatorio2 = somatorio2 + 1;
    }

    printf("Qual e a soma de %d + %d?: \n",n5,n6);
    res = n5 + n6;
    scanf("%d", &resposta);
    if(resposta == res){
        printf("ACERTOU A 5o!\n");
        somatorio1 = somatorio1 + 1;
    }else{
        printf("ERROU A 5o\n");
        somatorio2 = somatorio2 + 1;
    }

    printf("Acertou %d questoes\n",somatorio1);
    printf("Errou %d questoes",somatorio2);


}

