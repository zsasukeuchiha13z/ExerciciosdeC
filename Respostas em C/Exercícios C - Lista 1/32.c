#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n,s,a;
	int resp;

	printf("Digite o numero: ");
	scanf("%d", &n);

	s = n + 1;
	a = n - 1;
	resp = (s*3) +(a*2);

	printf("Resultado da soma do tripo do sucessor com o dobro do antecessor é: %d",resp);

	return 0;
}
