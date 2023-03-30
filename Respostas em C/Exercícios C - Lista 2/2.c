#include <stdio.h>
#include <math.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float numero,r;

	printf("Escreva o numero(Positivio ou Negativo)?: ");
	scanf("%f", &numero);

	if (numero >= 0){
		r = sqrt(numero);
		printf("Resultado:%f", r);
	} else
		printf("NUMERO É INVALIDO");

	return 0;
}
