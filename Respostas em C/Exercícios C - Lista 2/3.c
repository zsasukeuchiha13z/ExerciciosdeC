#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float n,r1,r2;

	printf("Digite o numero:");
	scanf("%f",&n);

	if (n >= 0){
		r1 = sqrt(n);
		printf("%f",r1);
	}else{
		r2 = pow(n,2);
		printf("%f",r2);
	}

	return 0;
}
