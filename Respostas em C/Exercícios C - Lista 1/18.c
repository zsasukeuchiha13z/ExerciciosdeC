#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float m,l;

	printf("Volume em metros cúbicos>");
	scanf("%f", &m);
	l = 1000*m;
	printf("Em litros: %f",l);

	return 0;
}
