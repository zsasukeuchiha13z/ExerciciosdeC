#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num,n1,n2,n3;

	printf("Digite um numero de 3 digitos (de 100 a 999)");
	scanf("%d", &num);

	n1 = num / 1 % 10;
	n2 = num / 10 % 10;
	n3 = num / 100 % 10;

	printf("%d%d%d",n1,n2,n3);

	return 0;
}
