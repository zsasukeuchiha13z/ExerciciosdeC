#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Digite o numero de N: \n");
	scanf("%d",&n);
	
	for(int i = n;i >= 0;i= i -2){
		
		
		printf(" %d ", i);		
		
	}
	
	return 0;
}
