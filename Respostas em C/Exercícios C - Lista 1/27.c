#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float h,m;
	printf("Quantos hectares?");
	scanf("%f", &h);
	m = h * 10000;
	printf("Valores em m2 , convertido>> %f",m);

	return 0;
}
