#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	do{
	printf("Numero positivo impar: ");
	scanf("%d",&n);
	if(n % 2 == 0){
		printf("INVALIDO!\n");	
	}
	}while(n % 2 == 0);
		for(int i = 1;i <= n;i= i + 2){
			
			printf("%d ",i);
			
		}
	

	return 0;
}
