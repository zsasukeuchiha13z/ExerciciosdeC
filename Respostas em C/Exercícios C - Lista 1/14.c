#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float r,g,pi;

	printf("Digite o ângulo em graus: \n");
	scanf("%f", &g);
	pi = 3.14;
	r = g*(pi/180);
	printf("Para radiano: \n %f",r);

	return 0;
}
