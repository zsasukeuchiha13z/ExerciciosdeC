#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float m,k;

	printf("Distancia em Milhas: \n");
	scanf("%f", &m);

	k = 1.61*m;

	printf("Distancia convertida para KM>> %f",k);

	return 0;
}
