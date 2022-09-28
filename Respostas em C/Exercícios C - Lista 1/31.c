#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n,a,s;

	printf("Digite o valor do número: ");
	scanf("%d", &n);
	a = n - 1;
	s = n + 1;
	printf("O valor do antecessor é: %d\n",a);
	printf("O valor do sucessor é: %d",s);


	return 0;
}
