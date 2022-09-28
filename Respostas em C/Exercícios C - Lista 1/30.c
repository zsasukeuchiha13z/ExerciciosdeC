#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float real, dolar;

	printf("REAL:");
	scanf("%f", &real);
	dolar = real*0.19;
	printf("$DOLAR:%f",dolar);

	return 0;
}
