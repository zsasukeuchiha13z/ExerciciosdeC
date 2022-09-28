#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float c, k;

	printf("Digite a temperatura em Celsios?\n");
	scanf("%f", &c);
	k = c + 273.15;
	printf("Temperatuda em Kelvin é: %f", k);

	return 0;
}
