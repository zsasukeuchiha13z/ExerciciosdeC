#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Escreva ate onde vai(decrescentemente): ");
	scanf("%d", &n);
		  //    5
	for(int i = n;i >= 0;i--){
		//      o 'n' segura ate onde vai o i
		printf(" %d ", i);
				
	}
	
}
