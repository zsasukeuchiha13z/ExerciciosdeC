#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float m,a;

	printf("Valor em m2? ");
	scanf("%f", &m);
	a = m * 0.000247;
	printf("ACRES: %f",a);

	return 0;
}
