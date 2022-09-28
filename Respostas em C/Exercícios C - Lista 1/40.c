#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float valor,dias;

	printf("Digite quantos dias o encanador trabalhou:");
	scanf("%f",&dias);
	valor = dias * 30;
	valor = valor*92/100;
	printf("Valor descontado com o imposto de renda>>%f",valor);

	return 0;
}
