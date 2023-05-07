#include <stdio.h>


int main(){

    int sal,temp;
    int sal_ajuste;
    int res_bonus;


    printf("Qual o valor do salario atual: \n");
    scanf("%d", &sal);
    printf("Quanto tempo/anos de servico na empresa: \n");
    scanf("%d", &temp);

    sal_ajuste = 0;

    if(sal <= 500){
        sal_ajuste = sal * 1.25;
    }
    else if(sal <= 1000){
        sal_ajuste = sal * 1.2;
    }
    else if(sal <= 1500){
        sal_ajuste = ((sal * 15)/100) + sal;
    }
    else if(sal <= 2000){
        sal_ajuste = sal * 1.1;
    }
    else if(sal > 2000){
        sal_ajuste = sal * 1;
    }


    if(temp < 1){
    }
    else if(temp >= 1 && temp <= 3){
        res_bonus = sal_ajuste + 100;
    }
    else if(temp >= 4 && temp <= 6){
        res_bonus = sal_ajuste + 200;
    }
    else if(temp >= 7 && temp <= 10){
        res_bonus = sal_ajuste + 300;
    }
    else if(temp > 10){
        res_bonus = sal_ajuste + 500;
    }

    if(sal == sal_ajuste && temp < 1){
        printf("Nao ganhou nenhum aumento.\n");
        return 0;
    }



    printf("Salario com reajuste: %d",res_bonus);

}
