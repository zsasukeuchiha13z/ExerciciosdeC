#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	do{
		printf("Digite um numero impar\n");
		scanf("%d",&n);
		if(n % 2 == 0){
			printf("Invalido!\n");		
		}
		
	}while(n % 2 == 0);
	
		for(int i = n;i >= 0;i = i - 2){
				  //7	
			printf(" %i ",i);	
			
		}
	
	return 0;
}
