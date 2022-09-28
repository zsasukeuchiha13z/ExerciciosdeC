#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float sal;

	printf("Digite o valor do salário:");
	scanf("%f", &sal);
	sal = sal * 125/100;
	printf("Salário com aumento é:%f",sal);

	return 0;
}
