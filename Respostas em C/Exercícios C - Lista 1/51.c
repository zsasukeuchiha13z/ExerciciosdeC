#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float x,y;
	float r;


	printf("escreva a 1o coordenada:");
	scanf("%f",&x);
	printf("escreva a 2o coordenada:");
	scanf("%f",&y);
	r = sqrt(pow(x,2)+pow(y,2));

	printf("Distacia para o (0,0) é :%f",r);


	return 0;
}
