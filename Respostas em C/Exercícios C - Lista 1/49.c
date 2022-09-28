#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int h,m,s,seg,dur,resto;

	printf("Digite as horas, do inicio:");
	scanf("%d", &h);
	printf("Digite os minutos, do inicio:");
	scanf("%d", &m);
	printf("Digite os segundos, do inicio:");
	scanf("%d", &s);
	printf("Qual a duração em segundos?");
	scanf("%d",&seg);
	dur = ((h*3600) + (m*60) + s) + seg;
	h = dur / 3600;
	resto = dur % 3600;
	m = resto / 60;
	s = resto % 60;


	printf("Termino no horario:\n");
	printf("%d\n",h);
	printf("%d\n",m);
	printf("%d",s);


	return 0;
}
