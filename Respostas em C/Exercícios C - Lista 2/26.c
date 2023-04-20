#include <stdio.h>

int main (){

    float km, litros;

    printf("Digite a distancia em KM: \n");
    scanf("%f", &km);
    printf("Digite a distancia em Litros: \n");
    scanf("%f", &litros);

    if((km/litros) < 8){
        printf("Venda o carro!\n");
    }
    else if(((km/litros) >= 8) && (km/litros) <= 14){
        printf("Economico!\n");
    }
    else if ((km/litros) > 12){
        printf("Super economico!");
    }


}
