#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

    float c,p;

    printf("Apresente o comprimento em polegadas: ");
    scanf("%f", &p);
    c = p*2.54;
    printf("Para centímetros>>%f",c);


	return 0;
}
