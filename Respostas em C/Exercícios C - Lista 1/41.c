#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float ht,vht,sal;

	printf("Valor da hora de trabalho em reais:\n");
	scanf("%f", &vht);
	printf("Horas trabalhadas:\n");
	scanf("%f", &ht);
	sal = (vht * ht)*110/100;
	printf("Valor que o funcionário ira receber:%f",sal);


	return 0;
}
