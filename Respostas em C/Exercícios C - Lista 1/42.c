#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float salb;

	printf("Qual o salário base?");
	scanf("%f", &salb);
	salb = salb * 98/100;
	printf("Salario base com a gratificação e o imposto é:%f",salb);


	return 0;
}
