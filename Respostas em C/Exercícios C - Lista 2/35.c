#include <stdio.h>

int main(){

    int dia,mes,ano;
    int dia_valido,mes_valido,ano_valido;
    int bissexto;

    printf("Digite o dia: \n");
    scanf("%d", &dia);
    printf("Digite o mes: \n");
    scanf("%d", &mes);
    printf("Digite o ano: \n");
    scanf("%d", &ano);

    dia_valido = 0;
    mes_valido = 0;
    ano_valido = 0;
    bissexto = 0;

    // Verificando se ano é bissexto.
    if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
        bissexto = 1;
    }else{
        bissexto = 0;
    }

    //Dias valido:

    if(mes == 1 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 1 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    if(bissexto == 0 && mes == 2 && dia > 0 && dia <= 28){
        dia_valido = 1;
    }else if((bissexto != 0) && mes != 2 && dia < 0 && dia > 28){
        dia_valido = 0;
    }

    if(bissexto == 1 && mes == 2 && dia > 0 && dia <= 29){
        dia_valido = 1;
    }else if((bissexto != 1) && mes != 2 && dia < 0 && dia > 29){
        dia_valido = 0;
    }

    if(mes == 3 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 3 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    if(mes == 4 && dia > 0 && dia <= 30){
        dia_valido = 1;
    }else if(mes != 4 && dia < 0 && dia > 30){
        dia_valido = 0;
    }

    if(mes == 5 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 5 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    if(mes == 6 && dia > 0 && dia <= 30){
        dia_valido = 1;
    }else if(mes != 6 && dia < 0 && dia > 30){
        dia_valido = 0;
    }

    if(mes == 7 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 7 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    if(mes == 8 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 8 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    if(mes == 9 && dia > 0 && dia <= 30){
        dia_valido = 1;
    }else if(mes != 9 && dia < 0 && dia > 30){
        dia_valido = 0;
    }

    if(mes == 10 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 10 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    if(mes == 11 && dia > 0 && dia <= 30){
        dia_valido = 1;
    }else if(mes != 11 && dia < 0 && dia > 30){
        dia_valido = 0;
    }

    if(mes == 12 && dia > 0 && dia <= 31){
        dia_valido = 1;
    }else if(mes != 12 && dia < 0 && dia > 31){
        dia_valido = 0;
    }

    //Mes validos:

    if(mes > 0 && mes <= 12){
        mes_valido = 1;
    }else{
        mes_valido = 0;
    }

    //Ano valido:

    if(ano >= 0){
        ano_valido = 1;
    }else{
        ano_valido = 0;
    }



    // Ultima checagem:>>
    if(dia_valido == 1 && mes_valido == 1 && ano_valido == 1){
        printf("Data valida!\n");
        printf("%d/%d/%d",dia,mes,ano);
    }else{
        printf("Data invalida!");
    }








}
