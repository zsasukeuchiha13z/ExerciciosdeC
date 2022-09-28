#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float m,h;
	printf("Valor em m2: ");
	scanf("%f", &m);
	h = m * 0.0001;
	printf("Valor em hectares:%f",h);

	return 0;
}
