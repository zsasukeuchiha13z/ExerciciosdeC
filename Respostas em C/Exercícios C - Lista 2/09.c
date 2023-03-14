#include <stdio.h>

int main(){

 int sal,prest;

 printf("Qual o valor do salario?: \n");
 scanf("%d", &sal);
 printf("Qual o valor da prestação?: \n");
 scanf("%d", &prest);

    if(prest > sal*0.2){

       printf("Emprestimo nao concedido.");

       }
    else{

        printf("Emprestimo concedido");

    }


}
