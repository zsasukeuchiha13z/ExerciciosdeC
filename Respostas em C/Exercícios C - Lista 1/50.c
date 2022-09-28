#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int idade,ano_atual,ano_nasc;

	printf("Digite sua idade:");
	scanf("%d", &idade);
	ano_atual = 2022;
	ano_nasc = ano_atual - idade;

	printf("Ano de nascimento:%d",ano_nasc);



	return 0;
}
