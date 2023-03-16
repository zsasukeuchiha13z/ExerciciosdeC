#include <stdio.h>

int main(){

    int x, y, z;

    printf("Digite os 3 valores do triangulo: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    if((x < y + z) && (y < x + z) && (z < x + y)){

        if((x == y && x == z) ){
            printf("Triangulo equilatero");
    }
            else if((x == y) || (x == z) || (y == z)){
                printf("Triangulo isosceles");
            }
                else if((x != y) && (x != z) && (y != z)){
                    printf("Triangulo escaleno");
                }

    }else{
        printf("NAO FOI POSSIVEL FAZER O TRIANGULO COM ESSES VALORES");
    }
}
