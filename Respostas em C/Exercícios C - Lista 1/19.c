#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int l,m;

	printf("Volume em litros: \n");
	scanf("%d", &l);
	m=l/1000;
	printf("Em metros cúbicos>>%d",m);

	return 0;
}
