#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float k,l;

	printf("Valor de massa em quilogramas:\n");
	scanf("%f", &k);
	l = k/0.45;
	printf("Em libras>>%f",l);

	return 0;
}
