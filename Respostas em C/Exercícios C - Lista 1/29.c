#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float n1,n2,n3,n4;
	float med;

	printf("Digite o 1o valor:");
	scanf("%f",&n1);
	printf("Digite o 2o valor:");
	scanf("%f",&n2);
	printf("Digite o 3o valor:");
	scanf("%f",&n3);
	printf("Digite o 4o valor:");
	scanf("%f",&n4);

	med = (n1+n2+n3+n4)/4;

	printf("Media Aritmética é: %f",med);

	return 0;
}
