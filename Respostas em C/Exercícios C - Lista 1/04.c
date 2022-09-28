#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float numero,resp;

	scanf("%f", &numero);
	resp = numero*numero;
	printf("%f", resp);

	return 0;
}
