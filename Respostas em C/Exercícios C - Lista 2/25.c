#include <stdio.h>
#include <math.h>

int main (){

    float a,b,c;
    float delta;
    float x1,x2,x3;

    printf("Digite o valor de a: \n");
    scanf("%f", &a);
    printf("Digite o valor de b: \n");
    scanf("%f", &b);
    printf("Digite o valor de c: \n");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    x3 = (-b/(2*a));

    if(delta < 0){
        printf("Nao existe raiz");
    }
    else if(delta == 0){
        printf("Raiz unica - %f",x3);
    }
    else{
        printf("Raizes - %f e %f",x1,x2);
    }

}
