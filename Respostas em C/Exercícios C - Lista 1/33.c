#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int l,res;

	printf("Digite o lado do quadrado: ");
	scanf("%d", &l);
	res = l*l;
	printf("Area do quadrado é: %d", res);
	return 0;
}
