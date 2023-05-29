#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite um numero positivo: ");
	scanf("%d",&numero);
	
	int i = 1;
	while(i <= numero){

		if(numero % i == 0){
			printf(" %d ",i);		
		}
		i++;	
	}
	
	return 0;
}
