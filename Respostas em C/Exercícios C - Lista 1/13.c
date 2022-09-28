#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float m,k;

	printf("Qual a distancia em Km? ");
	scanf("%f", &k);
	m = k/1.61;
	printf("Distancia em MILHAS: %f", m);

}
