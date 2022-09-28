#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float produto;

	printf("Digite o valor do produto:");
	scanf("%f", &produto);
	produto = produto*88/100;
	printf("Valor do produto com desconto de 12 por cento é: %f",produto);

	return 0;
}
