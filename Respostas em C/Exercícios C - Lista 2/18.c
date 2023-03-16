#include <stdio.h>

int main(){

    int esc;
    float x, y, res;

    printf("Para SOMA digite 1\n");
    printf("Para SUBTRACAO digite 2\n");
    printf("Para DIVISAO digite 3\n");
    printf("Para MULTIPLICACAO digite 4\n\n");
    scanf("%d", &esc);

    printf("CASO DIGITE ERRADO A OPERACAO, NAO FARA O CALCULO\n");

    printf("Digite o primeiro numero: \n");
    scanf("%f", &x);
    printf("Digite o segundo numero: \n");
    scanf("%f", &y);

    switch (esc) {

        case 1:
            res = x + y;
            printf("A SOMA DEU: %f", res);
            break;
        case 2:
            res = x - y;
            printf("A SUBTRACAO DEU: %f", res);
            break;
        case 3:
            res = x/y;
            printf("A DIVISAO DEU: %f", res);
            break;
        case 4:
            res= x * y;
            printf("A MULTIPLICACAO DEU: %f", res);
            break;
        default :
            printf("OPCAO INVALIDA!");
            break;
    }
}
