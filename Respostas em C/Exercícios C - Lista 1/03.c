#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1;
	int num2;
	int num3, resp;

	printf("Digite o 1 numero: ");
	scanf("%d", &num1);
	printf("Digite o 2 numero: ");
	scanf("%d", &num2);
	printf("Digite o 3 numero: ");
	scanf("%d", &num3);

	resp = num1 + num2 + num3;
	printf("RESULTADO: %d", resp);
	return 0;
}
