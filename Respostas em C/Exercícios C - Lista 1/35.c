#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float hip,a,b;

	printf("Digite o primeiro lado no triangulo: ");
	scanf("%f", &a);
	printf("Digite o segundo lado do triangulo: ");
	scanf("%f", &b);

	hip = sqrt(pow(a,2) + pow(b,2));

	printf("Hipotenusa igual a: %f",hip);

	return 0;
}
