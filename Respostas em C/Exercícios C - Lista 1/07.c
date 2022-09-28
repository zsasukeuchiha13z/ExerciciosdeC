#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float c,f;

	printf("Escreva temperatura em Farenheit: ");
	scanf("%f", &f);

	c = 5.0*(f-32.0)/9.0;

	printf("Temperatura em graus C é: %f", c);

	return 0;
}
