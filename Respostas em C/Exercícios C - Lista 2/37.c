#include <stdio.h>

int main(){

    int ent_hora, ent_minuto;
    int sai_hora, sai_minuto;
    int res_hora,res_minuto;

    int horas,minutos;

    float pag;
    int res;

    printf("Hora de  entrada: \n");
    scanf("%d %d", &ent_hora, &ent_minuto);
    printf("Hora da saida: \n");
    scanf("%d %d", &sai_hora, &sai_minuto);


    horas = sai_hora - ent_hora;
    minutos = sai_minuto - ent_minuto;



    if(sai_hora < ent_hora){
        horas  = abs((ent_hora - 24) - sai_hora);
    }


    if(horas < 1){
        res = 0;
    }
    else if(horas == 1){
        res = 1;
    }
    else if(horas > 1 && horas < 2){
        pag = 1;
        res = pag * horas;
    }
    else if(horas == 2 && horas < 3){
        pag = 1;
        res = pag * horas;
    }
    else if(horas == 3 && horas < 4){
        pag = 1.4;
        res = pag * horas;
    }
    else if(horas == 4 && horas < 5){
        pag = 1.4;
        res = pag * horas;
    }else{
        pag = 2;
        res = pag * horas;
    }


    printf("A pagar: %d", res);


}
