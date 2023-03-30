#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numero;

	printf("Digite um numero:");
	scanf("%d", &numero);

	if(numero % 2 == 0){
		printf("Numero par");
	}else{
		printf("Numero impar");
	}

	return 0;
}
