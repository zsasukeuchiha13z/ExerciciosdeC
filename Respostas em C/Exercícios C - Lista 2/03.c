#include <stdio.h>
#include <math.h>

int main(){

    float x,y;

    scanf("%f", &x);

    if(x >= 0){

        y = sqrt(x);
        printf("%f",y);

    }
    else{

        y = x*x;
        printf("%f",y);

    }


}
