#include <stdio.h>


int main (){


    int n;
    int imp;

    printf("Escreva N numeros para naturais:");
    scanf("%d", &n);

    imp = 1;
    for(int i = 1;i < n;i++){

        printf(" %d ",imp);

        imp = imp + 2;


    }

    printf(" %d ",imp);

}
