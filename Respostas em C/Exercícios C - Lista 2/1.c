#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n1,n2;

	printf("Escreva o primeiro numero:");
	scanf("%d", &n1);
	printf("Escreva o segundo numero:");
	scanf("%d", &n2);

	if(n1 > n2){
		printf("Maior:%d",n1);
	}
	else if (n2 > n1){
		printf("Maior:%d",n2);
	}
	else {
		printf("Numeros Iguais");
	}

}

