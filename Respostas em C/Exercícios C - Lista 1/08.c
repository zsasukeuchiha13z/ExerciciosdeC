#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float c,k;

	printf("Digite os graus em Kelvin: \n");
	scanf("%f",&k);
	c = k - 273.15;
	printf("Graus em Celsios: %f",c);

	return 0;
}
