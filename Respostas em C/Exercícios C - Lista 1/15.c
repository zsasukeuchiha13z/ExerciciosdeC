#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float g,r,pi;
	pi = 3.14;

	printf("Angulo em radiano:");
	scanf("%f", &r);
	g = r*180/pi;
	printf("De Radiano para Graus>>%f",g);


	return 0;
}
