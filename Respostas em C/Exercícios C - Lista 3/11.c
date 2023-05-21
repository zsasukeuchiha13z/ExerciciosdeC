#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Escreva ate onde vai: ");
	scanf("%d",&n);
	
				// enquanto
	for(int i = 1;i <= n;i++){
	
	printf(" %d ", i);			
		
	}
	
	return 0;
}
