#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int soma = 0;
	
	printf("Qual valor de N:");
	scanf("%d",&n);
	
				//enquanto
	for(int i = 0;i <= n;i++){
		
		soma = soma + i;
			
	}
	
	printf("Soma: %d",soma);
	
}
