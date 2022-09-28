#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float j,m;

	printf("Valor em m?\n");
	scanf("%f", &m);
	j = m/0.91;
	printf("Convertido para jardas dá> %f",j);


	return 0;
}
