#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float a,r,pi,v;
	pi = 3.1415;

	printf("Qual altura do cilindro? ");
	scanf("%f", &a);
	printf("Qual o raio do cilindro? ");
	scanf("%f", &r);
	v = pi*pow(r,2)*a;

	printf("Volume do cilinho é = %f",v);

	return 0;
}
