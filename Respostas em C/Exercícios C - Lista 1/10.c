#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float k, m;

	printf("Digite a velocidade em KM/h?");
	scanf("%f", &k);
	m = k/3.6;
	printf("A velocidade em M/s é> %f", m);


	return 0;
}
