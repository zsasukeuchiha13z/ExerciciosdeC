#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n = 0;
	float h;
	int n1;
	
	printf("Digite o valor de n para numero harmonico: ");
	scanf("%d", &n1);
	
	for(float i = 1;i <= n1;i++){
		
		n = n + 1/i;
			
	}
	h = n;
	
	printf("O H e igual a : %f",h);
	
	return 0;
}
