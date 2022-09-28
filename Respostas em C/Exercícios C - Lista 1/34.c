#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float r,pi,area;

	printf("Qual o raio do circulo? ");
	scanf("%f", &r);
	pi = 3.1415;
	area = pi * r*r;
	printf("Area do circulo é : %f",area);

	return 0;
}
