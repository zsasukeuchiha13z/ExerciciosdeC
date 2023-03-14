#include <stdio.h>
#include <math.h>

int main(){

    float x, y, z;


    scanf("%f",&x);

    if(x >= 0){

        y = x*x;
        z = sqrt(x);

        printf("%f\n",y);
        printf("%f",z);
    }

}
