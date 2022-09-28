#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float altura_degrau,altura,qnts_degrau;

	printf("Qual altura do degrau:");
	scanf("%f", &altura_degrau);
	printf("Qual altura quer subir?");
	scanf("%f", &altura);

	qnts_degrau = altura/altura_degrau;
	printf("A pessoa subiu %f degraus",qnts_degrau);

	return 0;
}
