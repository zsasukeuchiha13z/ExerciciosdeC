#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float m,k;

	printf("Velocidade em m/s?:\n");
	scanf("%f", &m);
	k = m*3.6;
	printf("Velocidade convertida a KM/h é: %f", k);

	return 0;
}
