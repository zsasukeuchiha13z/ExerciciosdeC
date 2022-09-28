#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float premio,g1,g2,g3;

	premio = 780000;

	g1 = premio * 46/100;
	g2 = premio * 32/100;
	g3 = premio * 22/100;

	printf("Ganhador n1:%f\n",g1);
	printf("Ganhador n2:%f\n",g2);
	printf("Ganhador n3:%f",g3);

	return 0;
}
