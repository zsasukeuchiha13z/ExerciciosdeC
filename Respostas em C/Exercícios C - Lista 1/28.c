#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n1,n2,n3;
	int res;

	printf("Digite o 1o valor: ");
	scanf("%d",&n1);
	printf("Digite o 2o valor: ");
	scanf("%d",&n2);
	printf("Digite o 2o valor: ");
	scanf("%d",&n3);
	res = (n1*n1) + (n2*n2) +(n3*n3);

	printf("A soma dos quadrados é igual a: %d",res);

	return 0;
}
