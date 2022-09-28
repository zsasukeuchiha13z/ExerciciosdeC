#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float resp, numero;

	scanf("%f", &numero);
	resp = numero * 1/5;
	printf("%f", resp);

	return 0;
}
