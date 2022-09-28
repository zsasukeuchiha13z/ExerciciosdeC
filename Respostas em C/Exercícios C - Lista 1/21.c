#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float l,k;

	printf("Massa em libras: \n");
	scanf("%f", &l);
	k = l*0.45;
	printf("PASSANDO PARA KILOGRAMAS>>%f",k);

	return 0;
}
