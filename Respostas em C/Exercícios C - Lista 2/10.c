#include <stdio.h>

int main(){

   float alt;
   char sexo;
   float peso_ideal;

    printf("Qual a sua altura?:\n");
    scanf("%f", &alt);
    printf("Qual seu sexo?[M/F]:");
    scanf("%s", &sexo);

    if(sexo == 'm'){

    peso_ideal = (72.7 * alt) - 58;
    printf("PESO IDEAL: %f",peso_ideal);

    }
    else{

        peso_ideal = (62.1 * alt) - 44.7;
        printf("PESO IDEAL: %f",peso_ideal);

    }




}
