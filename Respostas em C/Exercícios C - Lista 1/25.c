#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float a,m;

	printf("Valor em acres?:");
	scanf("%f",&a);
	m = a*4048.58;
	printf("Valor em m2>> %f",m);

	return 0;
}
