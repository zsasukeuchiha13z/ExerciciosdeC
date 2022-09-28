#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float numero;
	scanf("%f", &numero);
	printf("%f", numero);

	return 0;
}
