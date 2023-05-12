#include <stdio.h>

int main(){
    //FOR
    printf("For: \n");
    for(int i = 1; i < 101; i++){

        printf(" %d ",i);

    }
    //WHILE
    int i;
    i = 1;
    printf("\nWhile: \n");
    while(i <= 100){

        printf(" %d ",i);
        i = i + 1;
    }
    //DO WHILE
    i = 1;
    printf("\nDo While: \n");
    do{

        printf(" %d ",i);
        i = i + 1;

    }
    while(i <= 100);

}
