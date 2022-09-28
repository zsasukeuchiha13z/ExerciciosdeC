#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float n,r1,r2;

	printf("Digite um numero:");
	scanf("%f", &n);

	if (n >= 0){
		r1 = pow(n,2);
		r2 = sqrt(n);
		printf("%f\n",r1);
		printf("%f",r2);
	}


	return 0;
}
