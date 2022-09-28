#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float c,p;

	printf("Comprimento em centímetros:");
	scanf("%f", &c);
	p = c/2.54;
	printf("Em polegadas>>%f", p);

	return 0;
}
