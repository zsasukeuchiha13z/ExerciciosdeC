#include <stdio.h>

int main(){

    int dia,mes,ano;


    printf("Digite uma data : DD/MM/AAAA\n");
    scanf("%d/%d/%d", &dia,&mes,&ano);


    switch(mes){
        case 01:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 02:
            // O ano é bissexto
            if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            if(dia > 29){
                printf("Data invalida!!");
                return 0;
            }
            break;
            // O ano não é bissexto
            } else {
            if(dia > 28){
                printf("Data invalida!!");
                return 0;
            }
            }
            break;
        case 03:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 4:
            if(dia > 30){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 5:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 6:
            if(dia > 30){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 7:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 8:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 9:
            if(dia > 30){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 10:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 11:
            if(dia > 30){
                printf("Data invalida!!");
                return 0;
            }
            break;
        case 12:
            if(dia > 31){
                printf("Data invalida!!");
                return 0;
            }
            break;

            default:
            printf("Data invalida!!");
            return 0;
    }

    if (ano > 2008){
        printf("Data invalida!!");
        return 0;
    }

    printf("Data valida!!!");

}
