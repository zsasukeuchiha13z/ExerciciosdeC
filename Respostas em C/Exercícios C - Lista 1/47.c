#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num,n1,n2,n3,n4;

	printf("Digite um numero:");
	scanf("%d", &num);

	n1 = num/1000 % 10;
	n2 = num/100 % 10;
	n3 = num/10 % 10;
	n4 = num/1 % 10;

	printf("%d\n",n1);
	printf("%d\n",n2);
	printf("%d\n",n3);
	printf("%d\n",n4);

	return 0;
}
