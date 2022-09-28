#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float c,f;

	printf("Escreva a temperatura em Celsios \n");
	scanf("%f",&c);
	f = c*(9.0/5.0)+32.0;
	printf("Temperatura em Fahrenheit %f\n",f);

	return 0;
}
