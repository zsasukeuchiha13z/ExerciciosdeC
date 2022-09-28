#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float j,m;

	printf("Qual o valor em jardas?");
	scanf("%f",&j);
	m = 0.91*j;
	printf("Valor em metros>>%f",m);

	return 0;
}
