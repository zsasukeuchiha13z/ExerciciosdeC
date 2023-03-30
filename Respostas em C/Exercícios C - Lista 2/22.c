#include <stdio.h>

int main() {

    int idade, tempo_servico;

    printf("Qual a sua idade: \n");
    scanf("%d",&idade);
    printf("Qual seu tempo de servico: \n");
    scanf("%d", &tempo_servico);

    if(idade >= 65){
        printf("Voce tem 65 ou mais de idade, pode se aposentar");
    }
    else if(tempo_servico >= 30){
        printf("Voce tem mais de 30 anos de trabalho, pode se aposentar");
    }
    else if(idade >= 60 && tempo_servico >= 25){
        printf("Voce tem mais de 60 anos e trabalhou mais de 25, pode se aposentar");
    }
    else{
        printf("VOCE NAO PODE SE APOSENTAR.");
    }
}
